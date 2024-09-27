/*
 * File: ert_main.c
 *
 * Code generated for Simulink model 'AEBS_TOS'.
 *
 * Model version                  : 4.14
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Aug 14 14:51:43 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include <windows.h>
#include <process.h>
#include <processthreadsapi.h>
#include <stdio.h>              /* This ert_main.c example uses printf/fflush */
#include "AEBS_TOS.h"                  /* Model's header file */
#include "rtwtypes.h"
#define CHECK_STATUS(status,fcn)       if (status != 0) {fprintf(stderr, "Call to %s returned error status (%d).\n", (fcn),(status)); perror((fcn)); fflush(stderr); exit(EXIT_FAILURE);}

typedef struct {
  HANDLE threadHandle;
  unsigned threadID;
  int_T index;
  HANDLE startEvent;
  HANDLE stopEvent;
  LONG exitFlag;
} ThreadInfo;

ThreadInfo periodicThread[1];
ThreadInfo periodicTriggerThread[1];
int threadPriority[4] = { THREAD_PRIORITY_ABOVE_NORMAL,
  THREAD_PRIORITY_NORMAL,
  THREAD_PRIORITY_BELOW_NORMAL,
  THREAD_PRIORITY_LOWEST };

HANDLE quitEvent = NULL;
BOOL OnCtrlHandler(DWORD ctrl)
{
  /* Unused argument */
  (void)(ctrl);
  SetEvent(quitEvent);
  return true;
}

unsigned __stdcall baseRateTaskScheduler(void *arg)
{
  volatile boolean_T noErr;
  DWORD waitResult;
  HANDLE orTimer;
  LARGE_INTEGER orDueTime;

  /* Unused argument */
  (void)(arg);
  int_T taskId[1] = { 0 };

  noErr = (rtmGetErrorStatus(AEBS_TOS_M) == (NULL));
  orTimer = CreateWaitableTimer((NULL), false, (NULL));
  orDueTime.QuadPart = (LONGLONG)(0.02 * 1e7 * -1);
  while (noErr) {
    /* Check for Ctrl+C event */
    waitResult = WaitForSingleObject(quitEvent, 0);
    if ((waitResult == WAIT_OBJECT_0) || (waitResult == WAIT_FAILED)) {
      /* The quitEvent is set or the wait failed */
      noErr = false;
      continue;
    }

    CHECK_STATUS(SetWaitableTimer(orTimer, &orDueTime, 0, (NULL), (NULL), false)
                 == false, "SetWaitableTimer");
    waitResult = WaitForSingleObject(periodicThread[taskId[0]].stopEvent, 0);
    if (waitResult == WAIT_TIMEOUT) {
      printf("Overrun - rate for periodic task %d too fast.\n", taskId[0]);
      WaitForSingleObject(periodicThread[taskId[0]].stopEvent,INFINITE);
    }

    noErr = (rtmGetErrorStatus(AEBS_TOS_M) == (NULL));
    if (noErr) {
      SetEvent(periodicThread[taskId[0]].startEvent);
    }

    if (WaitForSingleObject(orTimer, 0) == WAIT_OBJECT_0) {
      printf("Overrun - periodic trigger 0 base rate too fast.\n");
    }
  }                                    /* while */

  InterlockedIncrement(&periodicThread[taskId[0]].exitFlag);
  SetEvent(periodicThread[taskId[0]].startEvent);
  _endthreadex(0);
  return 0;
}

unsigned __stdcall periodicTask(void *arg)
{
  DWORD waitResult;
  ThreadInfo* info = (ThreadInfo*)arg;
  volatile boolean_T noErr = true;
  while (noErr) {
    waitResult = WaitForSingleObject(info->startEvent,INFINITE);
    if ((waitResult != WAIT_OBJECT_0) || info->exitFlag) {
      /* Wait failed or exitFlag is set */
      noErr = false;
      continue;
    }

    AEBS_TOS_step();

    /* Get model outputs here */
    SetEvent(info->stopEvent);
  }

  _endthreadex(0);
  return 0;
}

int main(int argc, char *argv[])
{
  int i;
  int priority[1];

  /* Unused arguments */
  (void)(argc);
  (void)(argv);
  priority[0] = threadPriority[0];
  CHECK_STATUS(SetConsoleCtrlHandler((PHANDLER_ROUTINE)OnCtrlHandler, true) ==
               false, "SetConsoleCtrlHandler");
  printf("**starting the model**\n");
  fflush(stdout);

  /* Initialize model */
  AEBS_TOS_initialize();
  rtmSetErrorStatus(AEBS_TOS_M, 0);

  /* Set the priority of the main thread */
  CHECK_STATUS(SetThreadPriority(GetCurrentThread(),
    THREAD_PRIORITY_TIME_CRITICAL) == false, "SetThreadPriority");

  /* Create & initialize events used for thread synchronization */
  quitEvent = CreateEvent((NULL), true, false, (NULL));
  CHECK_STATUS(quitEvent == (NULL),"CreateEvent");

  /* Create periodic threads */
  for (i = 0; i < 1; i++) {
    periodicThread[i].index = (int_T) i;
    periodicThread[i].exitFlag = 0;

    /* Create the events that will be used by the thread */
    periodicThread[i].startEvent = CreateEvent((NULL), false, false, (NULL));
    CHECK_STATUS(periodicThread[i].startEvent == (NULL), "CreateEvent");
    periodicThread[i].stopEvent = CreateEvent((NULL), false, true, (NULL));
    CHECK_STATUS(periodicThread[i].stopEvent == (NULL), "CreateStopEventEvent");

    /* Create the thread in suspended mode */
    periodicThread[i].threadHandle = (HANDLE)_beginthreadex((NULL), 0,
      &periodicTask, &periodicThread[i], CREATE_SUSPENDED, &periodicThread[i].
      threadID);
    CHECK_STATUS(periodicThread[i].threadID == 0,"_beginthreadex");

    /* Set the thread priority */
    CHECK_STATUS(SetThreadPriority(periodicThread[i].threadHandle, priority[i]) ==
                 false, "SetThreadPriority");

    /* Start the thread */
    CHECK_STATUS(ResumeThread(periodicThread[i].threadHandle) == -1,
                 "ResumeThread");
  }

  /* Create periodic trigger threads */
  {
    periodicTriggerThread[0].index = 0;
    periodicTriggerThread[0].exitFlag = 0;
    periodicTriggerThread[0].startEvent = (NULL);
    periodicTriggerThread[0].stopEvent = (NULL);

    /* Create the thread in suspended mode */
    periodicTriggerThread[0].threadHandle = (HANDLE)_beginthreadex((NULL), 0,
      &baseRateTaskScheduler, (NULL), CREATE_SUSPENDED, &periodicTriggerThread[0]
      .threadID);
    CHECK_STATUS(periodicTriggerThread[0].threadHandle == 0,"_beginthreadex");

    /* Set the periodic trigger thread priority */
    CHECK_STATUS(SetThreadPriority(periodicTriggerThread[0].threadHandle,
      THREAD_PRIORITY_HIGHEST) == false, "SetThreadPriority");

    /* Start the periodic trigger thread */
    CHECK_STATUS(ResumeThread(periodicTriggerThread[0].threadHandle) == -1,
                 "ResumeThread");
  }

  /* Wait for a stopping condition. */
  for (i = 0; i < 1; i++) {
    WaitForSingleObject(periodicTriggerThread[i].threadHandle, INFINITE);
  }

  /* Clean up */
  for (i = 0; i< 1; i++) {
    if (periodicTriggerThread[i].threadHandle != (NULL)) {
      CloseHandle(periodicTriggerThread[i].threadHandle);
    }
  }

  if (quitEvent != (NULL)) {
    CloseHandle(quitEvent);
  }

  for (i = 0; i < 1; i++) {
    if (periodicThread[i].startEvent != (NULL)) {
      CloseHandle(periodicThread[i].startEvent);
    }

    if (periodicThread[i].stopEvent != (NULL)) {
      CloseHandle(periodicThread[i].stopEvent);
    }

    if (periodicThread[i].threadHandle != (NULL)) {
      CloseHandle(periodicThread[i].threadHandle);
    }
  }

  printf("**stopping the model**\n");
  fflush(stdout);
  if (rtmGetErrorStatus(AEBS_TOS_M) != (NULL)) {
    fprintf(stderr, "\n**%s**\n", rtmGetErrorStatus(AEBS_TOS_M));
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  AEBS_TOS_terminate();
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
