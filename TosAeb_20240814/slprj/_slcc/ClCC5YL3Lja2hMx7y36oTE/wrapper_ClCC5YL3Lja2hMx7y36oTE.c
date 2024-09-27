#line 1 "C:\\Users\\JIAPEN~1\\AppData\\Local\\Temp\\cxxfe_27937879536482.in"
#line 15 "D:\\Program Files\\Polyspace\\R2021a\\extern\\include\\mex.h"
#ifndef mex_h
#define mex_h
#line 9 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\stdio.h"
#ifndef _INC_STDIO
#define _INC_STDIO
#line 23 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vcruntime.h"
#ifndef _VCRUNTIME_H
#define _VCRUNTIME_H
#line 36
#ifndef _UCRT
#define _UCRT
#endif /* _UCRT */
#line 148 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\sal.h"
#ifndef _SAL_VERSION
#define _SAL_VERSION 20
#endif /* _SAL_VERSION */

#ifndef __SAL_H_VERSION
#define __SAL_H_VERSION 180000000
#endif /* __SAL_H_VERSION */
#line 182
#ifndef _USE_DECLSPECS_FOR_SAL
#define _USE_DECLSPECS_FOR_SAL 0
#endif /* _USE_DECLSPECS_FOR_SAL */
#ifndef _USE_ATTRIBUTES_FOR_SAL
#define _USE_ATTRIBUTES_FOR_SAL 0
#endif /* _USE_ATTRIBUTES_FOR_SAL */
#line 224
#ifndef _SAL_L_Source_
#define _SAL_L_Source_(Name,args,annotes) _SA_annotes3(SAL_name, #Name, "", "2") _Group_(annotes _SAL_nop_impl_)

#endif /* _SAL_L_Source_ */
#line 2363
#ifndef __nothrow
#define __nothrow
#endif /* __nothrow */
#line 16 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\concurrencysal.h"
#ifndef CONCURRENCYSAL_H
#define CONCURRENCYSAL_H
#line 293
#ifndef _Interlocked_operand_
#define _Interlocked_operand_
#endif /* _Interlocked_operand_ */
#line 394
#endif /* CONCURRENCYSAL_H */
#line 37 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vadefs.h"
#ifndef _VCRUNTIME_EXTRA_DISABLED_WARNINGS
#define _VCRUNTIME_EXTRA_DISABLED_WARNINGS
#endif /* _VCRUNTIME_EXTRA_DISABLED_WARNINGS */



#ifndef _VCRUNTIME_DISABLED_WARNINGS
#define _VCRUNTIME_DISABLED_WARNINGS _VCRUNTIME_DISABLED_WARNING_4339 _VCRUNTIME_DISABLED_WARNING_4412 4514 4820 _VCRUNTIME_EXTRA_DISABLED_WARNINGS
#endif /* _VCRUNTIME_DISABLED_WARNINGS */
#line 58
#ifndef _UINTPTR_T_DEFINED
#define _UINTPTR_T_DEFINED
#line 708 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\sal.h"
#pragma region Input Buffer SAL 1 compatibility macros
#line 1472
#pragma endregion Input Buffer SAL 1 compatibility macros
#line 15 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vadefs.h"
#pragma pack ( push, 8 )
#line 47
#pragma warning(push)
#pragma warning(disable: 4514 4820)
#line 61
typedef unsigned __int64 uintptr_t; 



#endif /* _UINTPTR_T_DEFINED */

#ifndef _VA_LIST_DEFINED
#define _VA_LIST_DEFINED



typedef char *va_list; 

#endif /* _VA_LIST_DEFINED */
#line 155
void __cdecl __va_start(va_list *, ...); 
#line 207
#pragma warning(pop)
#pragma pack ( pop )
#line 60 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vcruntime.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820)
#line 96
__pragma( pack ( push, 8 )) 
#line 193
typedef unsigned __int64 size_t; 
typedef __int64 ptrdiff_t; 
typedef __int64 intptr_t; 
#line 209
typedef _Bool __vcrt_bool; 



#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
#endif /* _SIZE_T_DEFINED */

#ifndef _PTRDIFF_T_DEFINED
#define _PTRDIFF_T_DEFINED
#endif /* _PTRDIFF_T_DEFINED */

#ifndef _INTPTR_T_DEFINED
#define _INTPTR_T_DEFINED
#endif /* _INTPTR_T_DEFINED */


#ifndef _WCHAR_T_DEFINED
#define _WCHAR_T_DEFINED
typedef unsigned short wchar_t; 
#endif /* _WCHAR_T_DEFINED */
#line 342
void __cdecl __security_init_cookie(void); 
#line 351
void __cdecl __security_check_cookie(uintptr_t _StackCookie); 
__declspec(noreturn) void __cdecl __report_gsfailure(uintptr_t _StackCookie); 



extern uintptr_t __security_cookie; 
#line 368
#endif /* _VCRUNTIME_H */
#line 40 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt.h"
#ifndef _ARM_WINAPI_PARTITION_DESKTOP_SDK_AVAILABLE
#define _ARM_WINAPI_PARTITION_DESKTOP_SDK_AVAILABLE 1
#endif /* _ARM_WINAPI_PARTITION_DESKTOP_SDK_AVAILABLE */
#line 76
#ifndef _UCRT_EXTRA_DISABLED_WARNINGS
#define _UCRT_EXTRA_DISABLED_WARNINGS
#endif /* _UCRT_EXTRA_DISABLED_WARNINGS */
#line 92
#ifndef _UCRT_DISABLED_WARNINGS
#define _UCRT_DISABLED_WARNINGS 4324 _UCRT_DISABLED_WARNING_4412 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727 _UCRT_EXTRA_DISABLED_WARNINGS
#endif /* _UCRT_DISABLED_WARNINGS */
#line 144
#ifndef _ACRTIMP_ALT
#define _ACRTIMP_ALT _ACRTIMP
#endif /* _ACRTIMP_ALT */
#line 364 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vcruntime.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 121 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 274
typedef _Bool __crt_bool; 
#line 328
#ifndef _CRT_UNUSED
#define _CRT_UNUSED(x) (void)x
#endif /* _CRT_UNUSED */
#line 371
__declspec(dllimport) void __cdecl _invalid_parameter_noinfo(void); 
__declspec(dllimport) __declspec(noreturn) void __cdecl _invalid_parameter_noinfo_noreturn(void); 

__declspec(noreturn) 
__declspec(dllimport) void __cdecl _invoke_watson(const wchar_t * _Expression, const wchar_t * _FunctionName, const wchar_t * _FileName, unsigned _LineNo, uintptr_t _Reserved); 
#line 498
#ifndef __STDC_WANT_SECURE_LIB__
#define __STDC_WANT_SECURE_LIB__ 1
#endif /* __STDC_WANT_SECURE_LIB__ */
#line 593
#ifndef _CRT_SECURE_CPP_NOTHROW
#define _CRT_SECURE_CPP_NOTHROW throw()
#endif /* _CRT_SECURE_CPP_NOTHROW */
#line 604
typedef int errno_t; 
typedef unsigned short wint_t; 
typedef unsigned short wctype_t; 
typedef long __time32_t; 
typedef __int64 __time64_t; 
#line 615
typedef 
#line 610
struct __crt_locale_data_public { 

const unsigned short *_locale_pctype; 
int _locale_mb_cur_max; 
unsigned _locale_lc_codepage; 
} __crt_locale_data_public; 
#line 621
typedef 
#line 617
struct __crt_locale_pointers { 

struct __crt_locale_data *locinfo; 
struct __crt_multibyte_data *mbcinfo; 
} __crt_locale_pointers; 

typedef __crt_locale_pointers *_locale_t; 
#line 629
typedef 
#line 625
struct _Mbstatet { 

unsigned long _Wchar; 
unsigned short _Byte, _State; 
} _Mbstatet; 

typedef _Mbstatet mbstate_t; 
#line 645
typedef __time64_t time_t; 




#ifndef _TIME_T_DEFINED
#define _TIME_T_DEFINED
#endif /* _TIME_T_DEFINED */


typedef size_t rsize_t; 
#line 2072
__pragma( pack ( pop )) 


#pragma warning(pop)
#line 12 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_stdio_config.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 89
__declspec(noinline) __inline unsigned __int64 *__cdecl __local_stdio_printf_options(void) 
{ 
static unsigned __int64 _OptionsStorage; 
return &_OptionsStorage; 
} 
#line 99
__declspec(noinline) __inline unsigned __int64 *__cdecl __local_stdio_scanf_options(void) 
{ 
static unsigned __int64 _OptionsStorage; 
return &_OptionsStorage; 
} 
#line 26 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_wstdio.h"
#ifndef _FILE_DEFINED
#define _FILE_DEFINED
#line 129 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_stdio_config.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 15 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_wstdio.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 31
typedef 
#line 28
struct _iobuf { 

void *_Placeholder; 
} FILE; 
#endif /* _FILE_DEFINED */

__declspec(dllimport) FILE *__cdecl __acrt_iob_func(unsigned _Ix); 
#line 51
__declspec(dllimport) wint_t __cdecl fgetwc(FILE * _Stream); 




__declspec(dllimport) wint_t __cdecl _fgetwchar(void); 


__declspec(dllimport) wint_t __cdecl fputwc(wchar_t _Character, FILE * _Stream); 




__declspec(dllimport) wint_t __cdecl _fputwchar(wchar_t _Character); 




__declspec(dllimport) wint_t __cdecl getwc(FILE * _Stream); 




__declspec(dllimport) wint_t __cdecl getwchar(void); 




__declspec(dllimport) wchar_t *__cdecl fgetws(wchar_t * _Buffer, int _BufferCount, FILE * _Stream); 
#line 86
__declspec(dllimport) int __cdecl fputws(const wchar_t * _Buffer, FILE * _Stream); 
#line 93
__declspec(dllimport) wchar_t *__cdecl _getws_s(wchar_t * _Buffer, size_t _BufferCount); 
#line 105
__declspec(dllimport) wint_t __cdecl putwc(wchar_t _Character, FILE * _Stream); 
#line 111
__declspec(dllimport) wint_t __cdecl putwchar(wchar_t _Character); 




__declspec(dllimport) int __cdecl _putws(const wchar_t * _Buffer); 




__declspec(dllimport) wint_t __cdecl ungetwc(wint_t _Character, FILE * _Stream); 
#line 127
__declspec(dllimport) FILE *__cdecl _wfdopen(int _FileHandle, const wchar_t * _Mode); 
#line 133
__declspec(dllimport) FILE *__cdecl _wfopen(const wchar_t * _FileName, const wchar_t * _Mode); 
#line 139
__declspec(dllimport) errno_t __cdecl _wfopen_s(FILE ** _Stream, const wchar_t * _FileName, const wchar_t * _Mode); 
#line 147
__declspec(dllimport) FILE *__cdecl _wfreopen(const wchar_t * _FileName, const wchar_t * _Mode, FILE * _OldStream); 
#line 154
__declspec(dllimport) errno_t __cdecl _wfreopen_s(FILE ** _Stream, const wchar_t * _FileName, const wchar_t * _Mode, FILE * _OldStream); 
#line 162
__declspec(dllimport) FILE *__cdecl _wfsopen(const wchar_t * _FileName, const wchar_t * _Mode, int _ShFlag); 
#line 168
__declspec(dllimport) void __cdecl _wperror(const wchar_t * _ErrorMessage); 
#line 175
__declspec(dllimport) FILE *__cdecl _wpopen(const wchar_t * _Command, const wchar_t * _Mode); 
#line 182
__declspec(dllimport) int __cdecl _wremove(const wchar_t * _FileName); 
#line 190
__declspec(dllimport) __declspec(allocator) wchar_t *__cdecl _wtempnam(const wchar_t * _Directory, const wchar_t * _FilePrefix); 
#line 199
__declspec(dllimport) errno_t __cdecl _wtmpnam_s(wchar_t * _Buffer, size_t _BufferCount); 
#line 210
__declspec(dllimport) wchar_t *__cdecl _wtmpnam(wchar_t * _Buffer); 
#line 224
__declspec(dllimport) wint_t __cdecl _fgetwc_nolock(FILE * _Stream); 




__declspec(dllimport) wint_t __cdecl _fputwc_nolock(wchar_t _Character, FILE * _Stream); 
#line 235
__declspec(dllimport) wint_t __cdecl _getwc_nolock(FILE * _Stream); 




__declspec(dllimport) wint_t __cdecl _putwc_nolock(wchar_t _Character, FILE * _Stream); 
#line 246
__declspec(dllimport) wint_t __cdecl _ungetwc_nolock(wint_t _Character, FILE * _Stream); 
#line 272
__declspec(dllimport) int __cdecl __stdio_common_vfwprintf(unsigned __int64 _Options, FILE * _Stream, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 281
__declspec(dllimport) int __cdecl __stdio_common_vfwprintf_s(unsigned __int64 _Options, FILE * _Stream, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 290
__declspec(dllimport) int __cdecl __stdio_common_vfwprintf_p(unsigned __int64 _Options, FILE * _Stream, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 299
__inline int __cdecl _vfwprintf_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwprintf(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} 



__inline int __cdecl vfwprintf(FILE *const 
_Stream, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_l(_Stream, _Format, 0, _ArgList); 
} 



__inline int __cdecl _vfwprintf_s_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwprintf_s(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} 
#line 345
__inline int __cdecl vfwprintf_s(FILE *const 
_Stream, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_s_l(_Stream, _Format, 0, _ArgList); 
} 
#line 361
__inline int __cdecl _vfwprintf_p_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwprintf_p(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} 



__inline int __cdecl _vfwprintf_p(FILE *const 
_Stream, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_p_l(_Stream, _Format, 0, _ArgList); 
} 



__inline int __cdecl _vwprintf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} 



__inline int __cdecl vwprintf(const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} 



__inline int __cdecl _vwprintf_s_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} 
#line 433
__inline int __cdecl vwprintf_s(const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} 
#line 448
__inline int __cdecl _vwprintf_p_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} 



__inline int __cdecl _vwprintf_p(const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} 



__inline int __cdecl _fwprintf_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwprintf_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl fwprintf(FILE *const 
_Stream, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwprintf_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _fwprintf_s_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwprintf_s_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 533
__inline int __cdecl fwprintf_s(FILE *const 
_Stream, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwprintf_s_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 553
__inline int __cdecl _fwprintf_p_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwprintf_p_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _fwprintf_p(FILE *const 
_Stream, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwprintf_p_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _wprintf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl wprintf(const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _wprintf_s_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 645
__inline int __cdecl wprintf_s(const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 664
__inline int __cdecl _wprintf_p_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _wprintf_p(const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 705
__declspec(dllimport) int __cdecl __stdio_common_vfwscanf(unsigned __int64 _Options, FILE * _Stream, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 714
__inline int __cdecl _vfwscanf_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwscanf(*__local_stdio_scanf_options(), _Stream, _Format, _Locale, _ArgList); 


} 



__inline int __cdecl vfwscanf(FILE *const 
_Stream, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwscanf_l(_Stream, _Format, 0, _ArgList); 
} 



__inline int __cdecl _vfwscanf_s_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfwscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Stream, _Format, _Locale, _ArgList); 


} 
#line 764
__inline int __cdecl vfwscanf_s(FILE *const 
_Stream, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwscanf_s_l(_Stream, _Format, 0, _ArgList); 
} 




__inline int __cdecl _vwscanf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
} 



__inline int __cdecl vwscanf(const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
} 



__inline int __cdecl _vwscanf_s_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfwscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
} 
#line 822
__inline int __cdecl vwscanf_s(const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vfwscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
} 
#line 837
__inline int __cdecl _fwscanf_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwscanf_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl fwscanf(FILE *const 
_Stream, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwscanf_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _fwscanf_s_l(FILE *const 
_Stream, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwscanf_s_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 895
__inline int __cdecl fwscanf_s(FILE *const 
_Stream, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwscanf_s_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 915
__inline int __cdecl _wscanf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl wscanf(const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _wscanf_s_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfwscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 970
__inline int __cdecl wscanf_s(const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfwscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1006
__declspec(dllimport) int __cdecl __stdio_common_vswprintf(unsigned __int64 _Options, wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1017
__declspec(dllimport) int __cdecl __stdio_common_vswprintf_s(unsigned __int64 _Options, wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1028
__declspec(dllimport) int __cdecl __stdio_common_vsnwprintf_s(unsigned __int64 _Options, wchar_t * _Buffer, size_t _BufferCount, size_t _MaxCount, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1040
__declspec(dllimport) int __cdecl __stdio_common_vswprintf_p(unsigned __int64 _Options, wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1051
__inline int __cdecl _vsnwprintf_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf((*__local_stdio_printf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vsnwprintf_s_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsnwprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vsnwprintf_s(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
} 


__inline int __cdecl _snwprintf(wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, ...); __inline int __cdecl _vsnwprintf(wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, va_list _Args); 
#line 1120
__inline int __cdecl _vsnwprintf(wchar_t *
_Buffer, size_t 
_BufferCount, const wchar_t *
_Format, va_list 
_ArgList) 




{ 
return _vsnwprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 
#line 1145
__inline int __cdecl _vswprintf_c_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vswprintf_c(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 




__inline int __cdecl _vswprintf_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
} 




__inline int __cdecl __vswprintf_l(wchar_t *const 
_Buffer, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vswprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
} 




__inline int __cdecl _vswprintf(wchar_t *const 
_Buffer, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_l(_Buffer, (size_t)(-1), _Format, 0, _ArgList); 
} 




__inline int __cdecl vswprintf(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 




__inline int __cdecl _vswprintf_s_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 
#line 1268
__inline int __cdecl vswprintf_s(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 
#line 1294
__inline int __cdecl _vswprintf_p_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf_p(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vswprintf_p(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 




__inline int __cdecl _vscwprintf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vscwprintf(const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vscwprintf_l(_Format, 0, _ArgList); 
} 




__inline int __cdecl _vscwprintf_p_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vswprintf_p((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vscwprintf_p(const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vscwprintf_p_l(_Format, 0, _ArgList); 
} 




__inline int __cdecl __swprintf_l(wchar_t *const 
_Buffer, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = __vswprintf_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _swprintf_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _swprintf(wchar_t *const 
_Buffer, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = __vswprintf_l(_Buffer, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl swprintf(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 


__inline int __cdecl __swprintf_l(wchar_t * _Buffer, const wchar_t * _Format, _locale_t _Locale, ...); __inline int __cdecl __vswprintf_l(wchar_t * _Buffer, const wchar_t * _Format, _locale_t _Locale, va_list _Args); 
#line 1484
__inline int __cdecl _swprintf(wchar_t * _Buffer, const wchar_t * _Format, ...); __inline int __cdecl _vswprintf(wchar_t * _Buffer, const wchar_t * _Format, va_list _Args); 
#line 1493
__inline int __cdecl _swprintf_s_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1515
__inline int __cdecl swprintf_s(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1544
__inline int __cdecl _swprintf_p_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _swprintf_p(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _swprintf_c_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _swprintf_c(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snwprintf_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 

_Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snwprintf(wchar_t *
_Buffer, size_t 
_BufferCount, const wchar_t *
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 

_Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snwprintf_s_l(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snwprintf_s(wchar_t *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1721
__inline int __cdecl _scwprintf_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vscwprintf_l(_Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _scwprintf(const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vscwprintf_l(_Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _scwprintf_p_l(const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vscwprintf_p_l(_Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _scwprintf_p(const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vscwprintf_p_l(_Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1797
#pragma warning(push)
#pragma warning(disable: 4141 6054)
#line 1854
#pragma warning(pop)
#line 1871
__declspec(dllimport) int __cdecl __stdio_common_vswscanf(unsigned __int64 _Options, const wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1882
__inline int __cdecl _vswscanf_l(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vswscanf(*__local_stdio_scanf_options(), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} 




__inline int __cdecl vswscanf(const wchar_t *
_Buffer, const wchar_t *
_Format, va_list 
_ArgList) 




{ 
return _vswscanf_l(_Buffer, _Format, 0, _ArgList); 
} 




__inline int __cdecl _vswscanf_s_l(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vswscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} 
#line 1935
__inline int __cdecl vswscanf_s(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, va_list 
_ArgList) 




{ 
return _vswscanf_s_l(_Buffer, _Format, 0, _ArgList); 
} 
#line 1960
__inline int __cdecl _vsnwscanf_l(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vswscanf(*__local_stdio_scanf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 


} 




__inline int __cdecl _vsnwscanf_s_l(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vswscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 


} 




__inline int __cdecl _swscanf_l(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vswscanf_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl swscanf(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vswscanf_l(_Buffer, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _swscanf_s_l(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vswscanf_s_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 2059
__inline int __cdecl swscanf_s(const wchar_t *const 
_Buffer, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vswscanf_s_l(_Buffer, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 2080
__inline int __cdecl _snwscanf_l(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 

_Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snwscanf(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 

_Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snwscanf_s_l(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snwscanf_s(const wchar_t *const 
_Buffer, const size_t 
_BufferCount, const wchar_t *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 2169
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 15 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\stdio.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 73
typedef __int64 fpos_t; 
#line 80
__declspec(dllimport) errno_t __cdecl _get_stream_buffer_pointers(FILE * _Stream, char *** _Base, char *** _Pointer, int ** _Count); 
#line 96
__declspec(dllimport) errno_t __cdecl clearerr_s(FILE * _Stream); 
#line 102
__declspec(dllimport) errno_t __cdecl fopen_s(FILE ** _Stream, const char * _FileName, const char * _Mode); 
#line 110
__declspec(dllimport) size_t __cdecl fread_s(void * _Buffer, size_t _BufferSize, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 119
__declspec(dllimport) errno_t __cdecl freopen_s(FILE ** _Stream, const char * _FileName, const char * _Mode, FILE * _OldStream); 
#line 127
__declspec(dllimport) char *__cdecl gets_s(char * _Buffer, rsize_t _Size); 
#line 133
__declspec(dllimport) errno_t __cdecl tmpfile_s(FILE ** _Stream); 
#line 139
__declspec(dllimport) errno_t __cdecl tmpnam_s(char * _Buffer, rsize_t _Size); 
#line 146
__declspec(dllimport) void __cdecl clearerr(FILE * _Stream); 
#line 152
__declspec(dllimport) int __cdecl fclose(FILE * _Stream); 




__declspec(dllimport) int __cdecl _fcloseall(void); 


__declspec(dllimport) FILE *__cdecl _fdopen(int _FileHandle, const char * _Mode); 
#line 166
__declspec(dllimport) int __cdecl feof(FILE * _Stream); 




__declspec(dllimport) int __cdecl ferror(FILE * _Stream); 




__declspec(dllimport) int __cdecl fflush(FILE * _Stream); 
#line 182
__declspec(dllimport) int __cdecl fgetc(FILE * _Stream); 




__declspec(dllimport) int __cdecl _fgetchar(void); 



__declspec(dllimport) int __cdecl fgetpos(FILE * _Stream, fpos_t * _Position); 
#line 198
__declspec(dllimport) char *__cdecl fgets(char * _Buffer, int _MaxCount, FILE * _Stream); 
#line 205
__declspec(dllimport) int __cdecl _fileno(FILE * _Stream); 




__declspec(dllimport) int __cdecl _flushall(void); 


__declspec(dllimport) FILE *__cdecl fopen(const char * _FileName, const char * _Mode); 
#line 221
__declspec(dllimport) int __cdecl fputc(int _Character, FILE * _Stream); 
#line 227
__declspec(dllimport) int __cdecl _fputchar(int _Character); 
#line 233
__declspec(dllimport) int __cdecl fputs(const char * _Buffer, FILE * _Stream); 
#line 239
__declspec(dllimport) size_t __cdecl fread(void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 248
__declspec(dllimport) FILE *__cdecl freopen(const char * _FileName, const char * _Mode, FILE * _Stream); 
#line 255
__declspec(dllimport) FILE *__cdecl _fsopen(const char * _FileName, const char * _Mode, int _ShFlag); 
#line 263
__declspec(dllimport) int __cdecl fsetpos(FILE * _Stream, const fpos_t * _Position); 
#line 270
__declspec(dllimport) int __cdecl fseek(FILE * _Stream, long _Offset, int _Origin); 
#line 278
__declspec(dllimport) int __cdecl _fseeki64(FILE * _Stream, __int64 _Offset, int _Origin); 
#line 286
__declspec(dllimport) long __cdecl ftell(FILE * _Stream); 
#line 292
__declspec(dllimport) __int64 __cdecl _ftelli64(FILE * _Stream); 




__declspec(dllimport) size_t __cdecl fwrite(const void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 306
__declspec(dllimport) int __cdecl getc(FILE * _Stream); 




__declspec(dllimport) int __cdecl getchar(void); 


__declspec(dllimport) int __cdecl _getmaxstdio(void); 
#line 321
__declspec(dllimport) int __cdecl _getw(FILE * _Stream); 



__declspec(dllimport) void __cdecl perror(const char * _ErrorMessage); 
#line 333
__declspec(dllimport) int __cdecl _pclose(FILE * _Stream); 




__declspec(dllimport) FILE *__cdecl _popen(const char * _Command, const char * _Mode); 
#line 347
__declspec(dllimport) int __cdecl putc(int _Character, FILE * _Stream); 
#line 353
__declspec(dllimport) int __cdecl putchar(int _Character); 




__declspec(dllimport) int __cdecl puts(const char * _Buffer); 
#line 364
__declspec(dllimport) int __cdecl _putw(int _Word, FILE * _Stream); 




__declspec(dllimport) int __cdecl remove(const char * _FileName); 




__declspec(dllimport) int __cdecl rename(const char * _OldFileName, const char * _NewFileName); 




__declspec(dllimport) int __cdecl _unlink(const char * _FileName); 
#line 385
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _unlink. See online help for details" ".")) 
__declspec(dllimport) int __cdecl unlink(const char * _FileName); 
#line 392
__declspec(dllimport) void __cdecl rewind(FILE * _Stream); 




__declspec(dllimport) int __cdecl _rmtmp(void); 


__declspec(dllimport) void __cdecl setbuf(FILE * _Stream, char * _Buffer); 
#line 406
__declspec(dllimport) int __cdecl _setmaxstdio(int _Maximum); 
#line 412
__declspec(dllimport) int __cdecl setvbuf(FILE * _Stream, char * _Buffer, int _Mode, size_t _Size); 
#line 425
__declspec(dllimport) __declspec(allocator) char *__cdecl _tempnam(const char * _DirectoryName, const char * _FilePrefix); 
#line 435
__declspec(dllimport) FILE *__cdecl tmpfile(void); 
#line 443
__declspec(dllimport) char *__cdecl tmpnam(char * _Buffer); 
#line 451
__declspec(dllimport) int __cdecl ungetc(int _Character, FILE * _Stream); 
#line 463
__declspec(dllimport) void __cdecl _lock_file(FILE * _Stream); 



__declspec(dllimport) void __cdecl _unlock_file(FILE * _Stream); 
#line 473
__declspec(dllimport) int __cdecl _fclose_nolock(FILE * _Stream); 
#line 479
__declspec(dllimport) int __cdecl _fflush_nolock(FILE * _Stream); 
#line 485
__declspec(dllimport) int __cdecl _fgetc_nolock(FILE * _Stream); 
#line 491
__declspec(dllimport) int __cdecl _fputc_nolock(int _Character, FILE * _Stream); 
#line 497
__declspec(dllimport) size_t __cdecl _fread_nolock(void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 506
__declspec(dllimport) size_t __cdecl _fread_nolock_s(void * _Buffer, size_t _BufferSize, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 515
__declspec(dllimport) int __cdecl _fseek_nolock(FILE * _Stream, long _Offset, int _Origin); 
#line 522
__declspec(dllimport) int __cdecl _fseeki64_nolock(FILE * _Stream, __int64 _Offset, int _Origin); 
#line 529
__declspec(dllimport) long __cdecl _ftell_nolock(FILE * _Stream); 




__declspec(dllimport) __int64 __cdecl _ftelli64_nolock(FILE * _Stream); 




__declspec(dllimport) size_t __cdecl _fwrite_nolock(const void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 547
__declspec(dllimport) int __cdecl _getc_nolock(FILE * _Stream); 




__declspec(dllimport) int __cdecl _putc_nolock(int _Character, FILE * _Stream); 
#line 558
__declspec(dllimport) int __cdecl _ungetc_nolock(int _Character, FILE * _Stream); 
#line 589
__declspec(dllimport) int *__cdecl __p__commode(void); 
#line 609
__declspec(dllimport) int __cdecl __stdio_common_vfprintf(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 617
__declspec(dllimport) int __cdecl __stdio_common_vfprintf_s(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 626
__declspec(dllimport) int __cdecl __stdio_common_vfprintf_p(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 635
__inline int __cdecl _vfprintf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfprintf(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} 



__inline int __cdecl vfprintf(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_l(_Stream, _Format, 0, _ArgList); 
} 



__inline int __cdecl _vfprintf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfprintf_s(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} 
#line 681
__inline int __cdecl vfprintf_s(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_s_l(_Stream, _Format, 0, _ArgList); 
} 
#line 697
__inline int __cdecl _vfprintf_p_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfprintf_p(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
} 



__inline int __cdecl _vfprintf_p(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_p_l(_Stream, _Format, 0, _ArgList); 
} 



__inline int __cdecl _vprintf_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} 



__inline int __cdecl vprintf(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} 



__inline int __cdecl _vprintf_s_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} 
#line 769
__inline int __cdecl vprintf_s(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} 
#line 784
__inline int __cdecl _vprintf_p_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
} 



__inline int __cdecl _vprintf_p(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
} 



__inline int __cdecl _fprintf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfprintf_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl fprintf(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfprintf_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 


__declspec(dllimport) int __cdecl _set_printf_count_output(int _Value); 



__declspec(dllimport) int __cdecl _get_printf_count_output(void); 


__inline int __cdecl _fprintf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfprintf_s_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 875
__inline int __cdecl fprintf_s(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfprintf_s_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 895
__inline int __cdecl _fprintf_p_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfprintf_p_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _fprintf_p(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfprintf_p_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _printf_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl printf(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _printf_s_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 987
__inline int __cdecl printf_s(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1006
__inline int __cdecl _printf_p_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _printf_p(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1046
__declspec(dllimport) int __cdecl __stdio_common_vfscanf(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _Arglist); 
#line 1055
__inline int __cdecl _vfscanf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfscanf(*__local_stdio_scanf_options(), _Stream, _Format, _Locale, _ArgList); 


} 



__inline int __cdecl vfscanf(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfscanf_l(_Stream, _Format, 0, _ArgList); 
} 



__inline int __cdecl _vfscanf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vfscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Stream, _Format, _Locale, _ArgList); 


} 
#line 1106
__inline int __cdecl vfscanf_s(FILE *const 
_Stream, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfscanf_s_l(_Stream, _Format, 0, _ArgList); 
} 
#line 1122
__inline int __cdecl _vscanf_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
} 



__inline int __cdecl vscanf(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
} 



__inline int __cdecl _vscanf_s_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vfscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
} 
#line 1165
__inline int __cdecl vscanf_s(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vfscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
} 
#line 1180
__inline int __cdecl _fscanf_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfscanf_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl fscanf(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfscanf_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _fscanf_s_l(FILE *const 
_Stream, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfscanf_s_l(_Stream, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1238
__inline int __cdecl fscanf_s(FILE *const 
_Stream, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfscanf_s_l(_Stream, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1258
__inline int __cdecl _scanf_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl scanf(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _scanf_s_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vfscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1313
__inline int __cdecl scanf_s(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vfscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1339
__declspec(dllimport) int __cdecl __stdio_common_vsprintf(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1349
__declspec(dllimport) int __cdecl __stdio_common_vsprintf_s(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1359
__declspec(dllimport) int __cdecl __stdio_common_vsnprintf_s(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, size_t _MaxCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1370
__declspec(dllimport) int __cdecl __stdio_common_vsprintf_p(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1381
__inline int __cdecl _vsnprintf_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vsnprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 
#line 1429
__inline int __cdecl vsnprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), _Buffer, _BufferCount, _Format, 0, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vsprintf_l(char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return _vsnprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
} 




__inline int __cdecl vsprintf(char *const 
_Buffer, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_l(_Buffer, (size_t)(-1), _Format, 0, _ArgList); 
} 




__inline int __cdecl _vsprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 
#line 1503
__inline int __cdecl vsprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 
#line 1529
__inline int __cdecl _vsprintf_p_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf_p(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vsprintf_p(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 




__inline int __cdecl _vsnprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsnprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vsnprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
} 
#line 1616
__inline int __cdecl vsnprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
} 
#line 1643
__inline int __cdecl _vscprintf_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 



__inline int __cdecl _vscprintf(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vscprintf_l(_Format, 0, _ArgList); 
} 



__inline int __cdecl _vscprintf_p_l(const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf_p((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 



__inline int __cdecl _vscprintf_p(const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vscprintf_p_l(_Format, 0, _ArgList); 
} 



__inline int __cdecl _vsnprintf_c_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
const int _Result = __stdio_common_vsprintf(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



return (_Result < 0) ? (-1) : _Result; 
} 




__inline int __cdecl _vsnprintf_c(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsnprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
} 




__inline int __cdecl _sprintf_l(char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 

_Result = _vsprintf_l(_Buffer, _Format, _Locale, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl sprintf(char *const 
_Buffer, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 

_Result = _vsprintf_l(_Buffer, _Format, 0, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} 


__inline int __cdecl sprintf(char * _Buffer, const char * _Format, ...); __inline int __cdecl vsprintf(char * _Buffer, const char * _Format, va_list _Args); 
#line 1792
__inline int __cdecl _sprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1815
__inline int __cdecl sprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1844
__inline int __cdecl _sprintf_p_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _sprintf_p(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snprintf_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 

_Result = _vsnprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 1919
__inline int __cdecl snprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = vsnprintf(_Buffer, _BufferCount, _Format, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snprintf(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsnprintf(_Buffer, _BufferCount, _Format, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 


__inline int __cdecl _snprintf(char * _Buffer, size_t _BufferCount, const char * _Format, ...); __inline int __cdecl _vsnprintf(char * _Buffer, size_t _BufferCount, const char * _Format, va_list _Args); 
#line 1968
__inline int __cdecl _snprintf_c_l(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snprintf_c(char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snprintf_s_l(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snprintf_s(char *const 
_Buffer, const size_t 
_BufferCount, const size_t 
_MaxCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 2059
__inline int __cdecl _scprintf_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vscprintf_l(_Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _scprintf(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vscprintf_l(_Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _scprintf_p_l(const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vscprintf_p_l(_Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _scprintf_p(const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vscprintf_p(_Format, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 2133
__declspec(dllimport) int __cdecl __stdio_common_vsscanf(unsigned __int64 _Options, const char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 2143
__inline int __cdecl _vsscanf_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vsscanf(*__local_stdio_scanf_options(), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} 



__inline int __cdecl vsscanf(const char *const 
_Buffer, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsscanf_l(_Buffer, _Format, 0, _ArgList); 
} 



__inline int __cdecl _vsscanf_s_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, va_list 
_ArgList) 




{ 
return __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 


} 




#pragma warning(push)
#pragma warning(disable: 6530)


__inline int __cdecl vsscanf_s(const char *const 
_Buffer, const char *const 
_Format, va_list 
_ArgList) 




{ 
return _vsscanf_s_l(_Buffer, _Format, 0, _ArgList); 
} 
#line 2216
#pragma warning(pop)




__inline int __cdecl _sscanf_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsscanf_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl sscanf(const char *const 
_Buffer, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 
_Result = _vsscanf_l(_Buffer, _Format, 0, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _sscanf_s_l(const char *const 
_Buffer, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 
_Result = _vsscanf_s_l(_Buffer, _Format, _Locale, _ArgList); 
(void)(_ArgList = (va_list)0); 
return _Result; 
} 
#line 2279
__inline int __cdecl sscanf_s(const char *const 
_Buffer, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 

_Result = vsscanf_s(_Buffer, _Format, _ArgList); 

(void)(_ArgList = (va_list)0); 
return _Result; 
} 




#pragma warning(push)
#pragma warning(disable: 6530)


__inline int __cdecl _snscanf_l(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 

_Result = __stdio_common_vsscanf(*__local_stdio_scanf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _snscanf(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 

_Result = __stdio_common_vsscanf(*__local_stdio_scanf_options(), _Buffer, _BufferCount, _Format, 0, _ArgList); 



(void)(_ArgList = (va_list)0); 
return _Result; 
} 




__inline int __cdecl _snscanf_s_l(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, const _locale_t 
_Locale, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Locale); 

_Result = __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 



(void)(_ArgList = (va_list)0); 
return _Result; 
} 



__inline int __cdecl _snscanf_s(const char *const 
_Buffer, const size_t 
_BufferCount, const char *const 
_Format, ...) 




{ 
int _Result; 
va_list _ArgList; 
(void)__va_start(&_ArgList, _Format); 

_Result = __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, 0, _ArgList); 



(void)(_ArgList = (va_list)0); 
return _Result; 
} 


#pragma warning(pop)
#line 2420
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _tempnam. See online help for detail" "s.")) 
__declspec(dllimport) char *__cdecl tempnam(const char * _Directory, const char * _FilePrefix); 
#line 2430
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fcloseall. See online help for deta" "ils.")) __declspec(dllimport) int __cdecl fcloseall(void); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fdopen. See online help for details" ".")) __declspec(dllimport) FILE *__cdecl fdopen(int _FileHandle, const char * _Format); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fgetchar. See online help for detai" "ls.")) __declspec(dllimport) int __cdecl fgetchar(void); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fileno. See online help for details" ".")) __declspec(dllimport) int __cdecl fileno(FILE * _Stream); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _flushall. See online help for detai" "ls.")) __declspec(dllimport) int __cdecl flushall(void); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fputchar. See online help for detai" "ls.")) __declspec(dllimport) int __cdecl fputchar(int _Ch); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _getw. See online help for details.")) __declspec(dllimport) int __cdecl getw(FILE * _Stream); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _putw. See online help for details.")) __declspec(dllimport) int __cdecl putw(int _Ch, FILE * _Stream); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _rmtmp. See online help for details." "")) __declspec(dllimport) int __cdecl rmtmp(void); 
#line 2448
#endif /* _INC_STDIO */
#line 2445
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 41 "D:\\Program Files\\Polyspace\\R2021a\\extern\\include\\mex.h"
typedef struct impl_info_tag *MEX_impl_info; 
#line 19 "D:\\Program Files\\Polyspace\\R2021a\\extern\\include\\matrix.h"
#ifndef matrix_h
#define matrix_h
#line 9 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\stdlib.h"
#ifndef _INC_STDLIB
#define _INC_STDLIB
#line 13 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_malloc.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 58
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_calloc_base(size_t _Count, size_t _Size); 
#line 65
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
calloc(size_t _Count, size_t _Size); 
#line 72
__declspec(dllimport) int __cdecl _callnewh(size_t _Size); 




__declspec(dllimport) __declspec(allocator) void *__cdecl 
_expand(void * _Block, size_t _Size); 




__declspec(dllimport) void __cdecl 
_free_base(void * _Block); 



__declspec(dllimport) void __cdecl 
free(void * _Block); 




__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_malloc_base(size_t _Size); 




__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
malloc(size_t _Size); 




__declspec(dllimport) size_t __cdecl 
_msize_base(void * _Block); 




__declspec(dllimport) size_t __cdecl 
_msize(void * _Block); 




__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_realloc_base(void * _Block, size_t _Size); 
#line 125
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
realloc(void * _Block, size_t _Size); 
#line 132
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_recalloc_base(void * _Block, size_t _Count, size_t _Size); 
#line 140
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_recalloc(void * _Block, size_t _Count, size_t _Size); 
#line 147
__declspec(dllimport) void __cdecl 
_aligned_free(void * _Block); 




__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_malloc(size_t _Size, size_t _Alignment); 
#line 160
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_offset_malloc(size_t _Size, size_t _Alignment, size_t _Offset); 
#line 168
__declspec(dllimport) size_t __cdecl 
_aligned_msize(void * _Block, size_t _Alignment, size_t _Offset); 
#line 176
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_offset_realloc(void * _Block, size_t _Size, size_t _Alignment, size_t _Offset); 
#line 185
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_offset_recalloc(void * _Block, size_t _Count, size_t _Size, size_t _Alignment, size_t _Offset); 
#line 195
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_realloc(void * _Block, size_t _Size, size_t _Alignment); 
#line 203
__declspec(dllimport) __declspec(allocator) __declspec(restrict) void *__cdecl 
_aligned_recalloc(void * _Block, size_t _Count, size_t _Size, size_t _Alignment); 
#line 9 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\stddef.h"
#ifndef _INC_STDDEF
#define _INC_STDDEF
#line 232 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_malloc.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 14 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\stddef.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 35
__declspec(dllimport) int *__cdecl _errno(void); 


__declspec(dllimport) errno_t __cdecl _set_errno(int _Value); 
__declspec(dllimport) errno_t __cdecl _get_errno(int * _Value); 
#line 55
__declspec(dllimport) extern unsigned long __cdecl __threadid(void); 

__declspec(dllimport) extern uintptr_t __cdecl __threadhandle(void); 
#line 64
#endif /* _INC_STDDEF */
#line 61
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 16 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_search.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 


typedef int (__cdecl *_CoreCrtSecureSearchSortCompareFunction)(void *, const void *, const void *); 
typedef int (__cdecl *_CoreCrtNonSecureSearchSortCompareFunction)(const void *, const void *); 
#line 30
__declspec(dllimport) void *__cdecl bsearch_s(const void * _Key, const void * _Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 39
__declspec(dllimport) void __cdecl qsort_s(void * _Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 52
__declspec(dllimport) void *__cdecl bsearch(const void * _Key, const void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 60
__declspec(dllimport) void __cdecl qsort(void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 68
__declspec(dllimport) void *__cdecl _lfind_s(const void * _Key, const void * _Base, unsigned * _NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 78
__declspec(dllimport) void *__cdecl _lfind(const void * _Key, const void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 87
__declspec(dllimport) void *__cdecl _lsearch_s(const void * _Key, void * _Base, unsigned * _NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 97
__declspec(dllimport) void *__cdecl _lsearch(const void * _Key, void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 194
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _lfind. See online help for details." "")) 
__declspec(dllimport) void *__cdecl lfind(const void * _Key, const void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 203
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _lsearch. See online help for detail" "s.")) 
__declspec(dllimport) void *__cdecl lsearch(const void * _Key, void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 216
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 13 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_wstdlib.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 54
__declspec(dllimport) errno_t __cdecl _itow_s(int _Value, wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 68
__declspec(dllimport) wchar_t *__cdecl _itow(int _Value, wchar_t * _Buffer, int _Radix); 
#line 77
__declspec(dllimport) errno_t __cdecl _ltow_s(long _Value, wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 91
__declspec(dllimport) wchar_t *__cdecl _ltow(long _Value, wchar_t * _Buffer, int _Radix); 
#line 99
__declspec(dllimport) errno_t __cdecl _ultow_s(unsigned long _Value, wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 113
__declspec(dllimport) wchar_t *__cdecl _ultow(unsigned long _Value, wchar_t * _Buffer, int _Radix); 
#line 121
__declspec(dllimport) double __cdecl wcstod(const wchar_t * _String, wchar_t ** _EndPtr); 
#line 127
__declspec(dllimport) double __cdecl _wcstod_l(const wchar_t * _String, wchar_t ** _EndPtr, _locale_t _Locale); 
#line 134
__declspec(dllimport) long __cdecl wcstol(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 141
__declspec(dllimport) long __cdecl _wcstol_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 149
__declspec(dllimport) __int64 __cdecl wcstoll(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 156
__declspec(dllimport) __int64 __cdecl _wcstoll_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 164
__declspec(dllimport) unsigned long __cdecl wcstoul(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 171
__declspec(dllimport) unsigned long __cdecl _wcstoul_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 179
__declspec(dllimport) unsigned __int64 __cdecl wcstoull(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 186
__declspec(dllimport) unsigned __int64 __cdecl _wcstoull_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 194
__declspec(dllimport) long double __cdecl wcstold(const wchar_t * _String, wchar_t ** _EndPtr); 
#line 200
__declspec(dllimport) long double __cdecl _wcstold_l(const wchar_t * _String, wchar_t ** _EndPtr, _locale_t _Locale); 
#line 207
__declspec(dllimport) float __cdecl wcstof(const wchar_t * _String, wchar_t ** _EndPtr); 
#line 213
__declspec(dllimport) float __cdecl _wcstof_l(const wchar_t * _String, wchar_t ** _EndPtr, _locale_t _Locale); 
#line 220
__declspec(dllimport) double __cdecl _wtof(const wchar_t * _String); 




__declspec(dllimport) double __cdecl _wtof_l(const wchar_t * _String, _locale_t _Locale); 
#line 231
__declspec(dllimport) int __cdecl _wtoi(const wchar_t * _String); 




__declspec(dllimport) int __cdecl _wtoi_l(const wchar_t * _String, _locale_t _Locale); 
#line 242
__declspec(dllimport) long __cdecl _wtol(const wchar_t * _String); 




__declspec(dllimport) long __cdecl _wtol_l(const wchar_t * _String, _locale_t _Locale); 
#line 253
__declspec(dllimport) __int64 __cdecl _wtoll(const wchar_t * _String); 




__declspec(dllimport) __int64 __cdecl _wtoll_l(const wchar_t * _String, _locale_t _Locale); 
#line 264
__declspec(dllimport) errno_t __cdecl _i64tow_s(__int64 _Value, wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 272
__declspec(dllimport) wchar_t *__cdecl _i64tow(__int64 _Value, wchar_t * _Buffer, int _Radix); 
#line 279
__declspec(dllimport) errno_t __cdecl _ui64tow_s(unsigned __int64 _Value, wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 287
__declspec(dllimport) wchar_t *__cdecl _ui64tow(unsigned __int64 _Value, wchar_t * _Buffer, int _Radix); 
#line 294
__declspec(dllimport) __int64 __cdecl _wtoi64(const wchar_t * _String); 




__declspec(dllimport) __int64 __cdecl _wtoi64_l(const wchar_t * _String, _locale_t _Locale); 
#line 305
__declspec(dllimport) __int64 __cdecl _wcstoi64(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 312
__declspec(dllimport) __int64 __cdecl _wcstoi64_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 320
__declspec(dllimport) unsigned __int64 __cdecl _wcstoui64(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix); 
#line 327
__declspec(dllimport) unsigned __int64 __cdecl _wcstoui64_l(const wchar_t * _String, wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 339
__declspec(dllimport) __declspec(allocator) wchar_t *__cdecl _wfullpath(wchar_t * _Buffer, const wchar_t * _Path, size_t _BufferCount); 
#line 348
__declspec(dllimport) errno_t __cdecl _wmakepath_s(wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _Drive, const wchar_t * _Dir, const wchar_t * _Filename, const wchar_t * _Ext); 
#line 366
__declspec(dllimport) void __cdecl _wmakepath(wchar_t * _Buffer, const wchar_t * _Drive, const wchar_t * _Dir, const wchar_t * _Filename, const wchar_t * _Ext); 
#line 375
__declspec(dllimport) void __cdecl _wperror(const wchar_t * _ErrorMessage); 




__declspec(dllimport) void __cdecl _wsplitpath(const wchar_t * _FullPath, wchar_t * _Drive, wchar_t * _Dir, wchar_t * _Filename, wchar_t * _Ext); 
#line 388
__declspec(dllimport) errno_t __cdecl _wsplitpath_s(const wchar_t * _FullPath, wchar_t * _Drive, size_t _DriveCount, wchar_t * _Dir, size_t _DirCount, wchar_t * _Filename, size_t _FilenameCount, wchar_t * _Ext, size_t _ExtCount); 
#line 409
__declspec(dllimport) errno_t __cdecl _wdupenv_s(wchar_t ** _Buffer, size_t * _BufferCount, const wchar_t * _VarName); 
#line 418
__declspec(dllimport) wchar_t *__cdecl _wgetenv(const wchar_t * _VarName); 
#line 424
__declspec(dllimport) errno_t __cdecl _wgetenv_s(size_t * _RequiredCount, wchar_t * _Buffer, size_t _BufferCount, const wchar_t * _VarName); 
#line 440
__declspec(dllimport) int __cdecl _wputenv(const wchar_t * _EnvString); 




__declspec(dllimport) errno_t __cdecl _wputenv_s(const wchar_t * _Name, const wchar_t * _Value); 




__declspec(dllimport) errno_t __cdecl _wsearchenv_s(const wchar_t * _Filename, const wchar_t * _VarName, wchar_t * _Buffer, size_t _BufferCount); 
#line 464
__declspec(dllimport) void __cdecl _wsearchenv(const wchar_t * _Filename, const wchar_t * _VarName, wchar_t * _ResultPath); 
#line 471
__declspec(dllimport) int __cdecl _wsystem(const wchar_t * _Command); 
#line 71 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\limits.h"
#ifndef RSIZE_MAX
#define RSIZE_MAX (SIZE_MAX >> 1)
#endif /* RSIZE_MAX */
#line 26 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\stdlib.h"
#ifndef _countof
#define _countof __crt_countof
#endif /* _countof */
#line 479 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_wstdlib.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 13 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\limits.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820)

__pragma( pack ( push, 8 )) 
#line 76
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 18 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 38
__declspec(dllimport) void __cdecl _swab(char * _Buf1, char * _Buf2, int _SizeInBytes); 
#line 56
__declspec(dllimport) __declspec(noreturn) void __cdecl exit(int _Code); 
__declspec(dllimport) __declspec(noreturn) void __cdecl _exit(int _Code); 
__declspec(dllimport) __declspec(noreturn) void __cdecl _Exit(int _Code); 
__declspec(dllimport) __declspec(noreturn) void __cdecl quick_exit(int _Code); 
__declspec(dllimport) __declspec(noreturn) void __cdecl abort(void); 
#line 67
__declspec(dllimport) unsigned __cdecl _set_abort_behavior(unsigned _Flags, unsigned _Mask); 
#line 74
#ifndef _CRT_ONEXIT_T_DEFINED
#define _CRT_ONEXIT_T_DEFINED

typedef int (__cdecl *_onexit_t)(void); 



#endif /* _CRT_ONEXIT_T_DEFINED */
#line 144
int __cdecl atexit(void (__cdecl *)(void)); 
_onexit_t __cdecl _onexit(_onexit_t _Func); 


int __cdecl at_quick_exit(void (__cdecl *)(void)); 
#line 159
typedef void (__cdecl *_purecall_handler)(void); 


typedef void (__cdecl *_invalid_parameter_handler)(const wchar_t *, const wchar_t *, const wchar_t *, unsigned, uintptr_t); 
#line 171
_purecall_handler __cdecl _set_purecall_handler(_purecall_handler _Handler); 



_purecall_handler __cdecl _get_purecall_handler(void); 


__declspec(dllimport) _invalid_parameter_handler __cdecl _set_invalid_parameter_handler(_invalid_parameter_handler _Handler); 



__declspec(dllimport) _invalid_parameter_handler __cdecl _get_invalid_parameter_handler(void); 

__declspec(dllimport) _invalid_parameter_handler __cdecl _set_thread_local_invalid_parameter_handler(_invalid_parameter_handler _Handler); 



__declspec(dllimport) _invalid_parameter_handler __cdecl _get_thread_local_invalid_parameter_handler(void); 
#line 212
__declspec(dllimport) int __cdecl _set_error_mode(int _Mode); 




__declspec(dllimport) int *__cdecl _errno(void); 


__declspec(dllimport) errno_t __cdecl _set_errno(int _Value); 
__declspec(dllimport) errno_t __cdecl _get_errno(int * _Value); 

__declspec(dllimport) unsigned long *__cdecl __doserrno(void); 


__declspec(dllimport) errno_t __cdecl _set_doserrno(unsigned long _Value); 
__declspec(dllimport) errno_t __cdecl _get_doserrno(unsigned long * _Value); 


__declspec(dllimport) char **__cdecl __sys_errlist(void); 


__declspec(dllimport) int *__cdecl __sys_nerr(void); 


__declspec(dllimport) void __cdecl perror(const char * _ErrMsg); 
#line 242
__declspec(dllimport) char **__cdecl __p__pgmptr(void); 
__declspec(dllimport) wchar_t **__cdecl __p__wpgmptr(void); 
__declspec(dllimport) int *__cdecl __p__fmode(void); 
#line 259
__declspec(dllimport) errno_t __cdecl _get_pgmptr(char ** _Value); 


__declspec(dllimport) errno_t __cdecl _get_wpgmptr(wchar_t ** _Value); 

__declspec(dllimport) errno_t __cdecl _set_fmode(int _Mode); 

__declspec(dllimport) errno_t __cdecl _get_fmode(int * _PMode); 
#line 279
typedef 
#line 275
struct _div_t { 

int quot; 
int rem; 
} div_t; 
#line 285
typedef 
#line 281
struct _ldiv_t { 

long quot; 
long rem; 
} ldiv_t; 
#line 291
typedef 
#line 287
struct _lldiv_t { 

__int64 quot; 
__int64 rem; 
} lldiv_t; 

int __cdecl abs(int _Number); 
long __cdecl labs(long _Number); 
__int64 __cdecl llabs(__int64 _Number); 
__int64 __cdecl _abs64(__int64 _Number); 

unsigned short __cdecl _byteswap_ushort(unsigned short _Number); 
unsigned long __cdecl _byteswap_ulong(unsigned long _Number); 
unsigned __int64 __cdecl _byteswap_uint64(unsigned __int64 _Number); 

__declspec(dllimport) div_t __cdecl div(int _Numerator, int _Denominator); 
__declspec(dllimport) ldiv_t __cdecl ldiv(long _Numerator, long _Denominator); 
__declspec(dllimport) lldiv_t __cdecl lldiv(__int64 _Numerator, __int64 _Denominator); 



#pragma warning(push)
#pragma warning(disable: 6540)

unsigned __cdecl _rotl(unsigned _Value, int _Shift); 
#line 317
unsigned long __cdecl _lrotl(unsigned long _Value, int _Shift); 




unsigned __int64 __cdecl _rotl64(unsigned __int64 _Value, int _Shift); 




unsigned __cdecl _rotr(unsigned _Value, int _Shift); 
#line 333
unsigned long __cdecl _lrotr(unsigned long _Value, int _Shift); 




unsigned __int64 __cdecl _rotr64(unsigned __int64 _Value, int _Shift); 




#pragma warning(pop)
#line 350
__declspec(dllimport) void __cdecl srand(unsigned _Seed); 

__declspec(dllimport) int __cdecl rand(void); 
#line 394
#pragma pack ( push, 4 )



typedef 
#line 396
struct { 
unsigned char ld[10]; 
} _LDOUBLE; 
#pragma pack ( pop )
#line 418
typedef 
#line 416
struct { 
double x; 
} _CRT_DOUBLE; 




typedef 
#line 421
struct { 
float f; 
} _CRT_FLOAT; 
#line 432
typedef 
#line 430
struct { 
long double x; 
} _LONGDOUBLE; 



#pragma pack ( push, 4 )



typedef 
#line 438
struct { 
unsigned char ld12[12]; 
} _LDBL12; 
#pragma pack ( pop )
#line 450
__declspec(dllimport) double __cdecl atof(const char * _String); 
__declspec(dllimport) int __cdecl atoi(const char * _String); 
__declspec(dllimport) long __cdecl atol(const char * _String); 
__declspec(dllimport) __int64 __cdecl atoll(const char * _String); 
__declspec(dllimport) __int64 __cdecl _atoi64(const char * _String); 

__declspec(dllimport) double __cdecl _atof_l(const char * _String, _locale_t _Locale); 
__declspec(dllimport) int __cdecl _atoi_l(const char * _String, _locale_t _Locale); 
__declspec(dllimport) long __cdecl _atol_l(const char * _String, _locale_t _Locale); 
__declspec(dllimport) __int64 __cdecl _atoll_l(const char * _String, _locale_t _Locale); 
__declspec(dllimport) __int64 __cdecl _atoi64_l(const char * _String, _locale_t _Locale); 

__declspec(dllimport) int __cdecl _atoflt(_CRT_FLOAT * _Result, const char * _String); 
__declspec(dllimport) int __cdecl _atodbl(_CRT_DOUBLE * _Result, char * _String); 
__declspec(dllimport) int __cdecl _atoldbl(_LDOUBLE * _Result, char * _String); 


__declspec(dllimport) int __cdecl _atoflt_l(_CRT_FLOAT * _Result, const char * _String, _locale_t _Locale); 
#line 474
__declspec(dllimport) int __cdecl _atodbl_l(_CRT_DOUBLE * _Result, char * _String, _locale_t _Locale); 
#line 482
__declspec(dllimport) int __cdecl _atoldbl_l(_LDOUBLE * _Result, char * _String, _locale_t _Locale); 
#line 489
__declspec(dllimport) float __cdecl strtof(const char * _String, char ** _EndPtr); 
#line 495
__declspec(dllimport) float __cdecl _strtof_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 502
__declspec(dllimport) double __cdecl strtod(const char * _String, char ** _EndPtr); 
#line 508
__declspec(dllimport) double __cdecl _strtod_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 515
__declspec(dllimport) long double __cdecl strtold(const char * _String, char ** _EndPtr); 
#line 521
__declspec(dllimport) long double __cdecl _strtold_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 528
__declspec(dllimport) long __cdecl strtol(const char * _String, char ** _EndPtr, int _Radix); 
#line 535
__declspec(dllimport) long __cdecl _strtol_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 543
__declspec(dllimport) __int64 __cdecl strtoll(const char * _String, char ** _EndPtr, int _Radix); 
#line 550
__declspec(dllimport) __int64 __cdecl _strtoll_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 558
__declspec(dllimport) unsigned long __cdecl strtoul(const char * _String, char ** _EndPtr, int _Radix); 
#line 565
__declspec(dllimport) unsigned long __cdecl _strtoul_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 573
__declspec(dllimport) unsigned __int64 __cdecl strtoull(const char * _String, char ** _EndPtr, int _Radix); 
#line 580
__declspec(dllimport) unsigned __int64 __cdecl _strtoull_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 588
__declspec(dllimport) __int64 __cdecl _strtoi64(const char * _String, char ** _EndPtr, int _Radix); 
#line 595
__declspec(dllimport) __int64 __cdecl _strtoi64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 603
__declspec(dllimport) unsigned __int64 __cdecl _strtoui64(const char * _String, char ** _EndPtr, int _Radix); 
#line 610
__declspec(dllimport) unsigned __int64 __cdecl _strtoui64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 626
__declspec(dllimport) errno_t __cdecl _itoa_s(int _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 641
__declspec(dllimport) char *__cdecl _itoa(int _Value, char * _Buffer, int _Radix); 
#line 650
__declspec(dllimport) errno_t __cdecl _ltoa_s(long _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 664
__declspec(dllimport) char *__cdecl _ltoa(long _Value, char * _Buffer, int _Radix); 
#line 673
__declspec(dllimport) errno_t __cdecl _ultoa_s(unsigned long _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 687
__declspec(dllimport) char *__cdecl _ultoa(unsigned long _Value, char * _Buffer, int _Radix); 
#line 696
__declspec(dllimport) errno_t __cdecl _i64toa_s(__int64 _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 705
__declspec(dllimport) char *__cdecl _i64toa(__int64 _Value, char * _Buffer, int _Radix); 
#line 713
__declspec(dllimport) errno_t __cdecl _ui64toa_s(unsigned __int64 _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 721
__declspec(dllimport) char *__cdecl _ui64toa(unsigned __int64 _Value, char * _Buffer, int _Radix); 
#line 741
__declspec(dllimport) errno_t __cdecl _ecvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 760
__declspec(dllimport) char *__cdecl _ecvt(double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 769
__declspec(dllimport) errno_t __cdecl _fcvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 790
__declspec(dllimport) char *__cdecl _fcvt(double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 798
__declspec(dllimport) errno_t __cdecl _gcvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _DigitCount); 
#line 814
__declspec(dllimport) char *__cdecl _gcvt(double _Value, int _DigitCount, char * _Buffer); 
#line 843
__declspec(dllimport) int __cdecl ___mb_cur_max_func(void); 


__declspec(dllimport) int __cdecl ___mb_cur_max_l_func(_locale_t _Locale); 
#line 852
__declspec(dllimport) int __cdecl mblen(const char * _Ch, size_t _MaxCount); 
#line 858
__declspec(dllimport) int __cdecl _mblen_l(const char * _Ch, size_t _MaxCount, _locale_t _Locale); 
#line 866
__declspec(dllimport) size_t __cdecl _mbstrlen(const char * _String); 
#line 872
__declspec(dllimport) size_t __cdecl _mbstrlen_l(const char * _String, _locale_t _Locale); 
#line 879
__declspec(dllimport) size_t __cdecl _mbstrnlen(const char * _String, size_t _MaxCount); 
#line 886
__declspec(dllimport) size_t __cdecl _mbstrnlen_l(const char * _String, size_t _MaxCount, _locale_t _Locale); 
#line 893
__declspec(dllimport) int __cdecl mbtowc(wchar_t * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes); 
#line 900
__declspec(dllimport) int __cdecl _mbtowc_l(wchar_t * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes, _locale_t _Locale); 
#line 908
__declspec(dllimport) errno_t __cdecl mbstowcs_s(size_t * _PtNumOfCharConverted, wchar_t * _DstBuf, size_t _SizeInWords, const char * _SrcBuf, size_t _MaxCount); 
#line 924
__declspec(dllimport) size_t __cdecl mbstowcs(wchar_t * _Dest, const char * _Source, size_t _MaxCount); 
#line 932
__declspec(dllimport) errno_t __cdecl _mbstowcs_s_l(size_t * _PtNumOfCharConverted, wchar_t * _DstBuf, size_t _SizeInWords, const char * _SrcBuf, size_t _MaxCount, _locale_t _Locale); 
#line 950
__declspec(dllimport) size_t __cdecl _mbstowcs_l(wchar_t * _Dest, const char * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 963
__declspec(dllimport) int __cdecl wctomb(char * _MbCh, wchar_t _WCh); 
#line 969
__declspec(dllimport) int __cdecl _wctomb_l(char * _MbCh, wchar_t _WCh, _locale_t _Locale); 
#line 978
__declspec(dllimport) errno_t __cdecl wctomb_s(int * _SizeConverted, char * _MbCh, rsize_t _SizeInBytes, wchar_t _WCh); 
#line 988
__declspec(dllimport) errno_t __cdecl _wctomb_s_l(int * _SizeConverted, char * _MbCh, size_t _SizeInBytes, wchar_t _WCh, _locale_t _Locale); 
#line 996
__declspec(dllimport) errno_t __cdecl wcstombs_s(size_t * _PtNumOfCharConverted, char * _Dst, size_t _DstSizeInBytes, const wchar_t * _Src, size_t _MaxCountInBytes); 
#line 1012
__declspec(dllimport) size_t __cdecl wcstombs(char * _Dest, const wchar_t * _Source, size_t _MaxCount); 
#line 1020
__declspec(dllimport) errno_t __cdecl _wcstombs_s_l(size_t * _PtNumOfCharConverted, char * _Dst, size_t _DstSizeInBytes, const wchar_t * _Src, size_t _MaxCountInBytes, _locale_t _Locale); 
#line 1038
__declspec(dllimport) size_t __cdecl _wcstombs_l(char * _Dest, const wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 1068
__declspec(dllimport) __declspec(allocator) char *__cdecl _fullpath(char * _Buffer, const char * _Path, size_t _BufferCount); 
#line 1077
__declspec(dllimport) errno_t __cdecl _makepath_s(char * _Buffer, size_t _BufferCount, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); 
#line 1095
__declspec(dllimport) void __cdecl _makepath(char * _Buffer, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); 
#line 1105
__declspec(dllimport) void __cdecl _splitpath(const char * _FullPath, char * _Drive, char * _Dir, char * _Filename, char * _Ext); 
#line 1114
__declspec(dllimport) errno_t __cdecl _splitpath_s(const char * _FullPath, char * _Drive, size_t _DriveCount, char * _Dir, size_t _DirCount, char * _Filename, size_t _FilenameCount, char * _Ext, size_t _ExtCount); 
#line 1132
__declspec(dllimport) errno_t __cdecl getenv_s(size_t * _RequiredCount, char * _Buffer, rsize_t _BufferCount, const char * _VarName); 
#line 1144
__declspec(dllimport) int *__cdecl __p___argc(void); 
__declspec(dllimport) char ***__cdecl __p___argv(void); 
__declspec(dllimport) wchar_t ***__cdecl __p___wargv(void); 
#line 1158
__declspec(dllimport) char ***__cdecl __p__environ(void); 
__declspec(dllimport) wchar_t ***__cdecl __p__wenviron(void); 
#line 1184
__declspec(dllimport) char *__cdecl getenv(const char * _VarName); 
#line 1201
__declspec(dllimport) errno_t __cdecl _dupenv_s(char ** _Buffer, size_t * _BufferCount, const char * _VarName); 
#line 1211
__declspec(dllimport) int __cdecl system(const char * _Command); 





#pragma warning(push)
#pragma warning(disable: 6540)


__declspec(dllimport) int __cdecl _putenv(const char * _EnvString); 




__declspec(dllimport) errno_t __cdecl _putenv_s(const char * _Name, const char * _Value); 




#pragma warning(pop)

__declspec(dllimport) errno_t __cdecl _searchenv_s(const char * _Filename, const char * _VarName, char * _Buffer, size_t _BufferCount); 
#line 1247
__declspec(dllimport) void __cdecl _searchenv(const char * _Filename, const char * _VarName, char * _Buffer); 
#line 1255
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetErrorMode in" "stead. See online help for details.")) 
__declspec(dllimport) void __cdecl _seterrormode(int _Mode); 



__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Beep instead. S" "ee online help for details.")) 
__declspec(dllimport) void __cdecl _beep(unsigned _Frequency, unsigned _Duration); 




__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Sleep instead. " "See online help for details.")) 
__declspec(dllimport) void __cdecl _sleep(unsigned long _Duration); 
#line 1289
#pragma warning(push)
#pragma warning(disable: 4141)

__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _ecvt. See online help for details.")) 
__declspec(dllimport) char *__cdecl ecvt(double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 1300
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _fcvt. See online help for details.")) 
__declspec(dllimport) char *__cdecl fcvt(double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 1308
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _gcvt. See online help for details.")) 
__declspec(dllimport) char *__cdecl gcvt(double _Value, int _DigitCount, char * _DstBuf); 
#line 1315
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _itoa. See online help for details.")) 
__declspec(dllimport) char *__cdecl itoa(int _Value, char * _Buffer, int _Radix); 
#line 1322
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _ltoa. See online help for details.")) 
__declspec(dllimport) char *__cdecl ltoa(long _Value, char * _Buffer, int _Radix); 
#line 1330
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _swab. See online help for details.")) 
__declspec(dllimport) void __cdecl swab(char * _Buf1, char * _Buf2, int _SizeInBytes); 
#line 1337
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _ultoa. See online help for details." "")) 
__declspec(dllimport) char *__cdecl ultoa(unsigned long _Value, char * _Buffer, int _Radix); 
#line 1346
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _putenv. See online help for details" ".")) 
__declspec(dllimport) int __cdecl putenv(const char * _EnvString); 



#pragma warning(pop)

_onexit_t __cdecl onexit(_onexit_t _Func); 
#line 1362
#endif /* _INC_STDLIB */
#line 12 "D:\\Program Files\\Polyspace\\R2021a\\extern\\include\\tmwtypes.h"
#ifndef tmwtypes_h
#define tmwtypes_h

#ifndef __TMWTYPES__
#define __TMWTYPES__
#line 8 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\stdbool.h"
#ifndef _STDBOOL
#define _STDBOOL
#line 21
#endif /* _STDBOOL */
#line 62 "D:\\Program Files\\Polyspace\\R2021a\\extern\\include\\tmwtypes.h"
#ifndef FLT_MANT_DIG
#define FLT_MANT_DIG 24
#endif /* FLT_MANT_DIG */
#ifndef DBL_MANT_DIG
#define DBL_MANT_DIG 53
#endif /* DBL_MANT_DIG */
#line 1359 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\stdlib.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 89 "D:\\Program Files\\Polyspace\\R2021a\\extern\\include\\tmwtypes.h"
typedef unsigned char uchar_T; 
typedef unsigned short ushort_T; 
typedef unsigned long ulong_T; 
#line 97
typedef unsigned __int64 ulonglong_T; 
#line 222
typedef char int8_T; 
#line 239
typedef unsigned char uint8_T; 
#line 257
typedef short int16_T; 
#line 275
typedef unsigned short uint16_T; 
#line 293
typedef int int32_T; 
#line 311
typedef unsigned uint32_T; 
#line 372
typedef float real32_T; 
#line 386
typedef double real64_T; 
#line 436
#ifndef INT64_T
#define INT64_T __int64
#endif /* INT64_T */
#ifndef UINT64_T
#define UINT64_T unsigned __int64
#endif /* UINT64_T */
#ifndef FMT64
#define FMT64 "I64"
#endif /* FMT64 */
#line 465
typedef __int64 int64_T; 
#line 479
typedef unsigned __int64 uint64_T; 
#line 535
typedef real64_T real_T; 
#line 544
typedef real_T time_T; 
#line 556
typedef unsigned char boolean_T; 


#ifndef CHARACTER_T
#define CHARACTER_T char
#endif /* CHARACTER_T */
typedef char char_T; 


#ifndef INTEGER_T
#define INTEGER_T int
#endif /* INTEGER_T */
typedef int int_T; 


#ifndef UINTEGER_T
#define UINTEGER_T unsigned
#endif /* UINTEGER_T */
typedef unsigned uint_T; 


#ifndef BYTE_T
#define BYTE_T unsigned char
#endif /* BYTE_T */
typedef unsigned char byte_T; 
#line 592
typedef 
#line 590
struct { 
real32_T re, im; 
} creal32_T; 
#line 601
typedef 
#line 599
struct { 
real64_T re, im; 
} creal64_T; 
#line 610
typedef 
#line 608
struct { 
real_T re, im; 
} creal_T; 
#line 621
typedef 
#line 619
struct { 
int8_T re, im; 
} cint8_T; 
#line 630
typedef 
#line 628
struct { 
uint8_T re, im; 
} cuint8_T; 
#line 639
typedef 
#line 637
struct { 
int16_T re, im; 
} cint16_T; 
#line 648
typedef 
#line 646
struct { 
uint16_T re, im; 
} cuint16_T; 
#line 657
typedef 
#line 655
struct { 
int32_T re, im; 
} cint32_T; 
#line 666
typedef 
#line 664
struct { 
uint32_T re, im; 
} cuint32_T; 
#line 675
typedef 
#line 673
struct { 
int64_T re, im; 
} cint64_T; 
#line 684
typedef 
#line 682
struct { 
uint64_T re, im; 
} cuint64_T; 
#line 759
__forceinline uint64_T double_to_uint64_helper(double d) { 
union double_to_uint64_union_type { 
double dd; 
uint64_T i64; 
} di; 
di.dd = d; 
return (((di.i64) & (0xfffffffffffffi64)) | (0x10000000000000i64)) << 11; 
} 
#line 834
typedef size_t mwSize; 
typedef size_t mwIndex; 
typedef ptrdiff_t mwSignedIndex; 



#ifndef SLSIZE_SLINDEX
#define SLSIZE_SLINDEX

typedef int64_T SLIndex; 
typedef int64_T SLSize; 




#endif /* SLSIZE_SLINDEX */
#line 878
typedef wchar_t CHAR16_T; 





#endif /* __TMWTYPES__ */

#endif /* tmwtypes_h */
#line 158 "D:\\Program Files\\Polyspace\\R2021a\\extern\\include\\matrix.h"
typedef struct mxArray_tag mxArray; 




typedef void (*mxFunctionPtr)(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[]); 
#line 173
typedef _Bool mxLogical; 




typedef CHAR16_T mxChar; 
#line 208
typedef 
#line 183
enum { 
mxUNKNOWN_CLASS, 
mxCELL_CLASS, 
mxSTRUCT_CLASS, 
mxLOGICAL_CLASS, 
mxCHAR_CLASS, 
mxVOID_CLASS, 
mxDOUBLE_CLASS, 
mxSINGLE_CLASS, 
mxINT8_CLASS, 
mxUINT8_CLASS, 
mxINT16_CLASS, 
mxUINT16_CLASS, 
mxINT32_CLASS, 
mxUINT32_CLASS, 
mxINT64_CLASS, 
mxUINT64_CLASS, 
mxFUNCTION_CLASS, 
mxOPAQUE_CLASS, 
mxOBJECT_CLASS, 

mxINDEX_CLASS = 15



} mxClassID; 




typedef enum { mxREAL, mxCOMPLEX} mxComplexity; 




typedef double mxDouble; 
typedef float mxSingle; 
typedef int8_T mxInt8; 
typedef uint8_T mxUint8; 
typedef int16_T mxInt16; 
typedef uint16_T mxUint16; 
typedef int32_T mxInt32; 
typedef uint32_T mxUint32; 
typedef int64_T mxInt64; 
typedef uint64_T mxUint64; 
#line 233
typedef struct { mxDouble real, imag; } mxComplexDouble; 
typedef struct { mxSingle real, imag; } mxComplexSingle; 
typedef struct { mxInt8 real, imag; } mxComplexInt8; 
typedef struct { mxUint8 real, imag; } mxComplexUint8; 
typedef struct { mxInt16 real, imag; } mxComplexInt16; 
typedef struct { mxUint16 real, imag; } mxComplexUint16; 
typedef struct { mxInt32 real, imag; } mxComplexInt32; 
typedef struct { mxUint32 real, imag; } mxComplexUint32; 
typedef struct { mxInt64 real, imag; } mxComplexInt64; 
typedef struct { mxUint64 real, imag; } mxComplexUint64; 
#line 514
extern void *mxMalloc_800(size_t n); 
#line 520
extern void *mxCalloc_800(size_t n, size_t size); 
#line 527
extern void mxFree_800(void * ptr); 




extern void *mxRealloc_800(void * ptr, size_t size); 




extern mwSize mxGetNumberOfDimensions_800(const mxArray * pa); 




extern const mwSize *mxGetDimensions_800(const mxArray * pa); 




extern size_t mxGetM_800(const mxArray * pa); 




extern mwIndex *mxGetIr_800(const mxArray * pa); 




extern mwIndex *mxGetJc_800(const mxArray * pa); 




extern mwSize mxGetNzmax_800(const mxArray * pa); 




extern void mxSetNzmax_800(mxArray * pa, mwSize nzmax); 




extern const char *mxGetFieldNameByNumber_800(const mxArray * pa, int n); 
#line 580
extern mxArray *mxGetFieldByNumber_800(const mxArray * pa, mwIndex i, int fieldnum); 




extern mxArray *mxGetCell_800(const mxArray * pa, mwIndex i); 




extern mxClassID mxGetClassID_800(const mxArray * pa); 




extern void *mxGetData_800(const mxArray * pa); 
#line 601
extern void mxSetData_800(mxArray * pa, void * newdata); 
#line 609
extern _Bool mxIsNumeric_800(const mxArray * pa); 




extern _Bool mxIsCell_800(const mxArray * pa); 




extern _Bool mxIsLogical_800(const mxArray * pa); 




extern _Bool mxIsScalar_800(const mxArray * pa); 




extern _Bool mxIsChar_800(const mxArray * pa); 




extern _Bool mxIsStruct_800(const mxArray * pa); 




extern _Bool mxIsOpaque_800(const mxArray * pa); 




extern _Bool mxIsFunctionHandle_800(const mxArray * pa); 
#line 651
extern _Bool mxIsObject_800(const mxArray * pa); 
#line 672
extern _Bool mxIsComplex_800(const mxArray * pa); 




extern _Bool mxIsSparse_800(const mxArray * pa); 
#line 683
extern _Bool mxIsDouble_800(const mxArray * pa); 
#line 689
extern _Bool mxIsSingle_800(const mxArray * pa); 
#line 695
extern _Bool mxIsInt8_800(const mxArray * pa); 
#line 701
extern _Bool mxIsUint8_800(const mxArray * pa); 
#line 707
extern _Bool mxIsInt16_800(const mxArray * pa); 
#line 713
extern _Bool mxIsUint16_800(const mxArray * pa); 
#line 719
extern _Bool mxIsInt32_800(const mxArray * pa); 
#line 725
extern _Bool mxIsUint32_800(const mxArray * pa); 
#line 731
extern _Bool mxIsInt64_800(const mxArray * pa); 
#line 737
extern _Bool mxIsUint64_800(const mxArray * pa); 




extern size_t mxGetNumberOfElements_800(const mxArray * pa); 
#line 764
extern mxChar *mxGetChars_800(const mxArray * pa); 
#line 772
extern int mxGetUserBits_800(const mxArray * pa); 
#line 780
extern void mxSetUserBits_800(mxArray * pa, int value); 
#line 786
extern double mxGetScalar_800(const mxArray * pa); 
#line 799
extern _Bool mxIsFromGlobalWS_800(const mxArray * pa); 




extern void mxSetFromGlobalWS_800(mxArray * pa, _Bool global); 




extern void mxSetM_800(mxArray * pa, mwSize m); 




extern size_t mxGetN_800(const mxArray * pa); 




extern _Bool mxIsEmpty_800(const mxArray * pa); 




extern int mxGetFieldNumber_800(const mxArray * pa, const char * name); 




extern void mxSetIr_800(mxArray * pa, mwIndex * newir); 




extern void mxSetJc_800(mxArray * pa, mwIndex * newjc); 

extern double *mxGetPr_800(const mxArray * pa); 
extern void mxSetPr_800(mxArray * pa, double * newdata); 
extern size_t mxGetElementSize_800(const mxArray * pa); 
#line 844
extern mwIndex mxCalcSingleSubscript_800(const mxArray * pa, mwSize nsubs, const mwIndex * subs); 
#line 852
extern int mxGetNumberOfFields_800(const mxArray * pa); 
#line 858
extern void mxSetCell_800(mxArray * pa, mwIndex i, mxArray * value); 
#line 864
extern void mxSetFieldByNumber_800(mxArray * pa, mwIndex i, int fieldnum, mxArray * value); 
#line 872
extern mxArray *mxGetField_800(const mxArray * pa, mwIndex i, const char * fieldname); 
#line 879
extern void mxSetField_800(mxArray * pa, mwIndex i, const char * fieldname, mxArray * value); 
#line 889
extern mxArray *mxGetProperty_800(const mxArray * pa, const mwIndex i, const char * propname); 
#line 897
extern void mxSetProperty_800(mxArray * pa, mwIndex i, const char * propname, const mxArray * value); 




extern const char *mxGetClassName_800(const mxArray * pa); 




extern _Bool mxIsClass_800(const mxArray * pa, const char * name); 
#line 914
extern mxArray *mxCreateNumericMatrix_800(mwSize m, mwSize n, mxClassID classid, mxComplexity flag); 
#line 921
extern mxArray *mxCreateUninitNumericMatrix_800(size_t m, size_t n, mxClassID classid, mxComplexity flag); 
#line 928
extern mxArray *mxCreateUninitNumericArray_800(size_t ndim, size_t * dims, mxClassID classid, mxComplexity flag); 




extern void mxSetN_800(mxArray * pa, mwSize n); 
#line 940
extern int mxSetDimensions_800(mxArray * pa, const mwSize * pdims, mwSize ndims); 




extern void mxDestroyArray_800(mxArray * pa); 
#line 954
extern mxArray *mxCreateNumericArray_800(mwSize ndim, const mwSize * dims, mxClassID classid, mxComplexity flag); 
#line 960
extern mxArray *mxCreateCharArray_800(mwSize ndim, const mwSize * dims); 
#line 967
extern mxArray *mxCreateDoubleMatrix_800(mwSize m, mwSize n, mxComplexity flag); 




extern mxLogical *mxGetLogicals_800(const mxArray * pa); 




extern mxArray *mxCreateLogicalArray_800(mwSize ndim, const mwSize * dims); 
#line 983
extern mxArray *mxCreateLogicalMatrix_800(mwSize m, mwSize n); 




extern mxArray *mxCreateLogicalScalar_800(_Bool value); 




extern _Bool mxIsLogicalScalar_800(const mxArray * pa); 




extern _Bool mxIsLogicalScalarTrue_800(const mxArray * pa); 
#line 1004
extern mxArray *mxCreateDoubleScalar_800(double value); 
#line 1025
extern mxArray *mxCreateSparse_800(mwSize m, mwSize n, mwSize nzmax, mxComplexity flag); 
#line 1031
extern mxArray *mxCreateSparseLogicalMatrix_800(mwSize m, mwSize n, mwSize nzmax); 
#line 1039
extern void mxGetNChars_800(const mxArray * pa, char * buf, mwSize nChars); 
#line 1050
extern int mxGetString_800(const mxArray * pa, char * buf, mwSize buflen); 
#line 1057
extern char *mxArrayToString_800(const mxArray * pa); 
#line 1065
extern char *mxArrayToUTF8String_800(const mxArray * pa); 
#line 1072
extern mxArray *mxCreateStringFromNChars_800(const char * str, mwSize n); 
#line 1079
extern mxArray *mxCreateString_800(const char * str); 




extern mxArray *mxCreateCharMatrixFromStrings_800(mwSize m, const char ** str); 
#line 1090
extern mxArray *mxCreateCellMatrix_800(mwSize m, mwSize n); 
#line 1096
extern mxArray *mxCreateCellArray_800(mwSize ndim, const mwSize * dims); 
#line 1103
extern mxArray *mxCreateStructMatrix_800(mwSize m, mwSize n, int nfields, const char ** fieldnames); 
#line 1110
extern mxArray *mxCreateStructArray_800(mwSize ndim, const mwSize * dims, int nfields, const char ** fieldnames); 




extern mxArray *mxDuplicateArray_800(const mxArray * in); 
#line 1122
extern int mxSetClassName_800(mxArray * pa, const char * classname); 
#line 1128
extern int mxAddField_800(mxArray * pa, const char * fieldname); 
#line 1134
extern void mxRemoveField_800(mxArray * pa, int field); 




extern double mxGetEps_800(void); 




extern double mxGetInf_800(void); 




extern double mxGetNaN_800(void); 




extern _Bool mxIsFinite_800(double x); 
#line 1160
extern _Bool mxIsInf_800(double x); 




extern _Bool mxIsNaN_800(double x); 
#line 1192
extern mxDouble *mxGetDoubles_800(const mxArray *); extern int mxSetDoubles_800(mxArray *, mxDouble *); extern mxComplexDouble *mxGetComplexDoubles_800(const mxArray *); extern int mxSetComplexDoubles_800(mxArray *, mxComplexDouble *); 
extern mxSingle *mxGetSingles_800(const mxArray *); extern int mxSetSingles_800(mxArray *, mxSingle *); extern mxComplexSingle *mxGetComplexSingles_800(const mxArray *); extern int mxSetComplexSingles_800(mxArray *, mxComplexSingle *); 
extern mxInt8 *mxGetInt8s_800(const mxArray *); extern int mxSetInt8s_800(mxArray *, mxInt8 *); extern mxComplexInt8 *mxGetComplexInt8s_800(const mxArray *); extern int mxSetComplexInt8s_800(mxArray *, mxComplexInt8 *); 
extern mxUint8 *mxGetUint8s_800(const mxArray *); extern int mxSetUint8s_800(mxArray *, mxUint8 *); extern mxComplexUint8 *mxGetComplexUint8s_800(const mxArray *); extern int mxSetComplexUint8s_800(mxArray *, mxComplexUint8 *); 
extern mxInt16 *mxGetInt16s_800(const mxArray *); extern int mxSetInt16s_800(mxArray *, mxInt16 *); extern mxComplexInt16 *mxGetComplexInt16s_800(const mxArray *); extern int mxSetComplexInt16s_800(mxArray *, mxComplexInt16 *); 
extern mxUint16 *mxGetUint16s_800(const mxArray *); extern int mxSetUint16s_800(mxArray *, mxUint16 *); extern mxComplexUint16 *mxGetComplexUint16s_800(const mxArray *); extern int mxSetComplexUint16s_800(mxArray *, mxComplexUint16 *); 
extern mxInt32 *mxGetInt32s_800(const mxArray *); extern int mxSetInt32s_800(mxArray *, mxInt32 *); extern mxComplexInt32 *mxGetComplexInt32s_800(const mxArray *); extern int mxSetComplexInt32s_800(mxArray *, mxComplexInt32 *); 
extern mxUint32 *mxGetUint32s_800(const mxArray *); extern int mxSetUint32s_800(mxArray *, mxUint32 *); extern mxComplexUint32 *mxGetComplexUint32s_800(const mxArray *); extern int mxSetComplexUint32s_800(mxArray *, mxComplexUint32 *); 
extern mxInt64 *mxGetInt64s_800(const mxArray *); extern int mxSetInt64s_800(mxArray *, mxInt64 *); extern mxComplexInt64 *mxGetComplexInt64s_800(const mxArray *); extern int mxSetComplexInt64s_800(mxArray *, mxComplexInt64 *); 
extern mxUint64 *mxGetUint64s_800(const mxArray *); extern int mxSetUint64s_800(mxArray *, mxUint64 *); extern mxComplexUint64 *mxGetComplexUint64s_800(const mxArray *); extern int mxSetComplexUint64s_800(mxArray *, mxComplexUint64 *); 

extern int mxMakeArrayReal_800(mxArray *); 
extern int mxMakeArrayComplex_800(mxArray *); 
#line 1299
#endif /* matrix_h */
#line 49 "D:\\Program Files\\Polyspace\\R2021a\\extern\\include\\mex.h"
typedef void (*mex_exit_fn)(void); 
#line 58
typedef 
#line 54
struct mexGlobalTableEntry_Tag { 

const char *name; 
mxArray **variable; 
} mexGlobalTableEntry, *mexGlobalTable; 
#line 73
typedef 
#line 67
struct mexFunctionTableEntry_tag { 
const char *name; 
mxFunctionPtr f; 
int nargin; 
int nargout; 
struct _mexLocalFunctionTable *local_function_table; 
} mexFunctionTableEntry, *mexFunctionTable; 




typedef 
#line 75
struct _mexLocalFunctionTable { 
size_t length; 
mexFunctionTable entries; 
} _mexLocalFunctionTable, *mexLocalFunctionTable; 




typedef 
#line 80
struct { 
void (*initialize)(void); 
void (*terminate)(void); 
} _mexInitTermTableEntry, *mexInitTermTableEntry; 



typedef void (*fn_clean_up_after_error)(void); 
typedef const char *(*fn_simple_function_to_string)(mxFunctionPtr f); 

typedef mexLocalFunctionTable (*fn_mex_get_local_function_table)(void); 
typedef mexLocalFunctionTable (*fn_mex_set_local_function_table)(mexLocalFunctionTable); 
#line 150
extern void mexErrMsgTxt_800(const char * error_msg); 
#line 159
extern void mexErrMsgIdAndTxt_800(const char * identifier, const char * err_msg, ...); 
#line 170
extern void mexWarnMsgTxt_800(const char * warn_msg); 
#line 181
extern void mexWarnMsgIdAndTxt_800(const char * identifier, const char * warn_msg, ...); 
#line 191
extern int mexPrintf_800(const char * fmt, ...); 
#line 206
extern void mexMakeArrayPersistent_800(mxArray * pa); 
#line 216
extern void mexMakeMemoryPersistent_800(void * ptr); 
#line 222
extern int mexCallMATLAB_800(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[], const char * fcn_name); 
#line 234
extern mxArray *mexCallMATLABWithTrap_800(int nlhs, mxArray * plhs[], int nrhs, mxArray * prhs[], const char * fcn_name); 
#line 247
extern void mexPrintAssertion_800(const char * test, const char * fname, int linenum, const char * message); 
#line 257
extern _Bool mexIsGlobal_800(const mxArray * pA); 
#line 264
extern int mexPutVariable_800(const char * workspace, const char * name, const mxArray * parray); 
#line 275
extern const mxArray *mexGetVariablePtr_800(const char * workspace, const char * name); 
#line 285
extern mxArray *mexGetVariable_800(const char * workspace, const char * name); 
#line 294
extern void mexLock_800(void); 
#line 300
extern void mexUnlock_800(void); 
#line 306
extern _Bool mexIsLocked_800(void); 
#line 312
extern const char *mexFunctionName_800(void); 
#line 319
extern int mexEvalString_800(const char * str); 
#line 328
extern mxArray *mexEvalStringWithTrap_800(const char * str); 
#line 336
extern int mexAtExit_800(mex_exit_fn exit_fcn); 
#line 356
extern void mexFunction(int nlhs, mxArray * plhs[], int nrhs, const mxArray * prhs[]); 
#line 363
#endif /* mex_h */
#line 9 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\string.h"
#ifndef _INC_STRING
#define _INC_STRING
#line 9 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\errno.h"
#ifndef _INC_ERRNO
#define _INC_ERRNO



#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 




__declspec(dllimport) int *__cdecl _errno(void); 


__declspec(dllimport) errno_t __cdecl _set_errno(int _Value); 
__declspec(dllimport) errno_t __cdecl _get_errno(int * _Value); 

__declspec(dllimport) unsigned long *__cdecl __doserrno(void); 


__declspec(dllimport) errno_t __cdecl _set_doserrno(unsigned long _Value); 
__declspec(dllimport) errno_t __cdecl _get_doserrno(unsigned long * _Value); 
#line 137
#endif /* _INC_ERRNO */
#line 134
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 12 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vcruntime_string.h"
#pragma warning(push)
#pragma warning(disable: 4514 4820)



__pragma( pack ( push, 8 )) 




void *__cdecl memchr(const void * _Buf, int _Val, size_t _MaxCount); 
#line 29
int __cdecl memcmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 43
void *__cdecl memcpy(void * _Dst, const void * _Src, size_t _Size); 
#line 50
void *__cdecl memmove(void * _Dst, const void * _Src, size_t _Size); 
#line 63
void *__cdecl memset(void * _Dst, int _Val, size_t _Size); 
#line 70
char *__cdecl strchr(const char * _Str, int _Val); 
#line 76
char *__cdecl strrchr(const char * _Str, int _Ch); 
#line 82
char *__cdecl strstr(const char * _Str, const char * _SubStr); 
#line 89
wchar_t *__cdecl wcschr(const wchar_t * _Str, wchar_t _Ch); 
#line 95
wchar_t *__cdecl wcsrchr(const wchar_t * _Str, wchar_t _Ch); 
#line 102
wchar_t *__cdecl wcsstr(const wchar_t * _Str, const wchar_t * _SubStr); 
#line 20 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_memcpy_s.h"
#ifndef _CRT_MEMCPY_S_INLINE
#define _CRT_MEMCPY_S_INLINE static __inline
#endif /* _CRT_MEMCPY_S_INLINE */
#line 109 "D:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\VC\\Tools\\MSVC\\14.29.30133\\include\\vcruntime_string.h"
__pragma( pack ( pop )) 



#pragma warning(pop)
#line 14 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_memcpy_s.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 39
static __inline errno_t __cdecl memcpy_s(void *const 
_Destination, const rsize_t 
_DestinationSize, const void *const 
_Source, const rsize_t 
_SourceSize) 

{ { 
if (_SourceSize == (0)) 
{ 
return 0; 
}  } 

{ int _Expr_val = !(!(_Destination != (void *)0)); { if (!_Expr_val) { *_errno() = 22; _invalid_parameter_noinfo(); return 22; }  } } ; { 
if ((_Source == (void *)0) || (_DestinationSize < _SourceSize)) 
{ 
memset(_Destination, 0, _DestinationSize); 

{ int _Expr_val = !(!(_Source != (void *)0)); { if (!_Expr_val) { *_errno() = 22; _invalid_parameter_noinfo(); return 22; }  } } ; 
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); { if (!_Expr_val) { *_errno() = 34; _invalid_parameter_noinfo(); return 34; }  } } ; 


return 22; 
}  } 
memcpy(_Destination, _Source, _SourceSize); 
return 0; 
} 


static __inline errno_t __cdecl memmove_s(void *const 
_Destination, const rsize_t 
_DestinationSize, const void *const 
_Source, const rsize_t 
_SourceSize) 

{ { 
if (_SourceSize == (0)) 
{ 
return 0; 
}  } 

{ int _Expr_val = !(!(_Destination != (void *)0)); { if (!_Expr_val) { *_errno() = 22; _invalid_parameter_noinfo(); return 22; }  } } ; 
{ int _Expr_val = !(!(_Source != (void *)0)); { if (!_Expr_val) { *_errno() = 22; _invalid_parameter_noinfo(); return 22; }  } } ; 
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); { if (!_Expr_val) { *_errno() = 34; _invalid_parameter_noinfo(); return 34; }  } } ; 

memmove(_Destination, _Source, _SourceSize); 
return 0; 
} 
#line 92
#pragma warning(pop)
__pragma( pack ( pop )) 
#line 17 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_memory.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)




__pragma( pack ( push, 8 )) 




__declspec(dllimport) int __cdecl _memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 35
__declspec(dllimport) int __cdecl _memicmp_l(const void * _Buf1, const void * _Buf2, size_t _Size, _locale_t _Locale); 
#line 82
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _memccpy. See online help for detail" "s.")) 
__declspec(dllimport) void *__cdecl memccpy(void * _Dst, const void * _Src, int _Val, size_t _Size); 
#line 90
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _memicmp. See online help for detail" "s.")) 
__declspec(dllimport) int __cdecl memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 118
__pragma( pack ( pop )) 



#pragma warning(pop)
#line 14 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_wstring.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)




__pragma( pack ( push, 8 )) 
#line 32
__declspec(dllimport) errno_t __cdecl wcscat_s(wchar_t * _Destination, rsize_t _SizeInWords, const wchar_t * _Source); 
#line 39
__declspec(dllimport) errno_t __cdecl wcscpy_s(wchar_t * _Destination, rsize_t _SizeInWords, const wchar_t * _Source); 
#line 46
__declspec(dllimport) errno_t __cdecl wcsncat_s(wchar_t * _Destination, rsize_t _SizeInWords, const wchar_t * _Source, rsize_t _MaxCount); 
#line 54
__declspec(dllimport) errno_t __cdecl wcsncpy_s(wchar_t * _Destination, rsize_t _SizeInWords, const wchar_t * _Source, rsize_t _MaxCount); 
#line 62
__declspec(dllimport) wchar_t *__cdecl wcstok_s(wchar_t * _String, const wchar_t * _Delimiter, wchar_t ** _Context); 
#line 83
__declspec(dllimport) __declspec(allocator) wchar_t *__cdecl _wcsdup(const wchar_t * _String); 
#line 100
__declspec(dllimport) wchar_t *__cdecl wcscat(wchar_t * _Destination, const wchar_t * _Source); 
#line 108
__declspec(dllimport) int __cdecl wcscmp(const wchar_t * _String1, const wchar_t * _String2); 
#line 119
__declspec(dllimport) wchar_t *__cdecl wcscpy(wchar_t * _Destination, const wchar_t * _Source); 
#line 126
__declspec(dllimport) size_t __cdecl wcscspn(const wchar_t * _String, const wchar_t * _Control); 
#line 132
__declspec(dllimport) size_t __cdecl wcslen(const wchar_t * _String); 
#line 145
__declspec(dllimport) size_t __cdecl wcsnlen(const wchar_t * _Source, size_t _MaxCount); 
#line 161
static __inline size_t __cdecl wcsnlen_s(const wchar_t *
_Source, size_t 
_MaxCount) 

{ 
return (_Source == (0)) ? (0) : wcsnlen(_Source, _MaxCount); 
} 
#line 178
__declspec(dllimport) wchar_t *__cdecl wcsncat(wchar_t * _Destination, const wchar_t * _Source, size_t _Count); 
#line 187
__declspec(dllimport) int __cdecl wcsncmp(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount); 
#line 200
__declspec(dllimport) wchar_t *__cdecl wcsncpy(wchar_t * _Destination, const wchar_t * _Source, size_t _Count); 
#line 209
__declspec(dllimport) wchar_t *__cdecl wcspbrk(const wchar_t * _String, const wchar_t * _Control); 
#line 215
__declspec(dllimport) size_t __cdecl wcsspn(const wchar_t * _String, const wchar_t * _Control); 
#line 221
__declspec(dllimport) wchar_t *__cdecl wcstok(wchar_t * _String, const wchar_t * _Delimiter, wchar_t ** _Context); 
#line 239
static __inline wchar_t *__cdecl _wcstok(wchar_t *const 
_String, const wchar_t *const 
_Delimiter) 

{ 
return wcstok(_String, _Delimiter, 0); 
} 
#line 268
__declspec(dllimport) wchar_t *__cdecl _wcserror(int _ErrorNumber); 




__declspec(dllimport) errno_t __cdecl _wcserror_s(wchar_t * _Buffer, size_t _SizeInWords, int _ErrorNumber); 
#line 288
__declspec(dllimport) wchar_t *__cdecl __wcserror(const wchar_t * _String); 



__declspec(dllimport) errno_t __cdecl __wcserror_s(wchar_t * _Buffer, size_t _SizeInWords, const wchar_t * _ErrorMessage); 
#line 304
__declspec(dllimport) int __cdecl _wcsicmp(const wchar_t * _String1, const wchar_t * _String2); 




__declspec(dllimport) int __cdecl _wcsicmp_l(const wchar_t * _String1, const wchar_t * _String2, _locale_t _Locale); 
#line 315
__declspec(dllimport) int __cdecl _wcsnicmp(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount); 
#line 321
__declspec(dllimport) int __cdecl _wcsnicmp_l(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 328
__declspec(dllimport) errno_t __cdecl _wcsnset_s(wchar_t * _Destination, size_t _SizeInWords, wchar_t _Value, size_t _MaxCount); 
#line 342
__declspec(dllimport) wchar_t *__cdecl _wcsnset(wchar_t * _String, wchar_t _Value, size_t _MaxCount); 
#line 350
__declspec(dllimport) wchar_t *__cdecl _wcsrev(wchar_t * _String); 



__declspec(dllimport) errno_t __cdecl _wcsset_s(wchar_t * _Destination, size_t _SizeInWords, wchar_t _Value); 
#line 366
__declspec(dllimport) wchar_t *__cdecl _wcsset(wchar_t * _String, wchar_t _Value); 
#line 373
__declspec(dllimport) errno_t __cdecl _wcslwr_s(wchar_t * _String, size_t _SizeInWords); 
#line 383
__declspec(dllimport) wchar_t *__cdecl _wcslwr(wchar_t * _String); 
#line 389
__declspec(dllimport) errno_t __cdecl _wcslwr_s_l(wchar_t * _String, size_t _SizeInWords, _locale_t _Locale); 
#line 401
__declspec(dllimport) wchar_t *__cdecl _wcslwr_l(wchar_t * _String, _locale_t _Locale); 
#line 409
__declspec(dllimport) errno_t __cdecl _wcsupr_s(wchar_t * _String, size_t _Size); 
#line 419
__declspec(dllimport) wchar_t *__cdecl _wcsupr(wchar_t * _String); 
#line 425
__declspec(dllimport) errno_t __cdecl _wcsupr_s_l(wchar_t * _String, size_t _Size, _locale_t _Locale); 
#line 437
__declspec(dllimport) wchar_t *__cdecl _wcsupr_l(wchar_t * _String, _locale_t _Locale); 
#line 446
__declspec(dllimport) size_t __cdecl wcsxfrm(wchar_t * _Destination, const wchar_t * _Source, size_t _MaxCount); 
#line 454
__declspec(dllimport) size_t __cdecl _wcsxfrm_l(wchar_t * _Destination, const wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 462
__declspec(dllimport) int __cdecl wcscoll(const wchar_t * _String1, const wchar_t * _String2); 
#line 468
__declspec(dllimport) int __cdecl _wcscoll_l(const wchar_t * _String1, const wchar_t * _String2, _locale_t _Locale); 
#line 475
__declspec(dllimport) int __cdecl _wcsicoll(const wchar_t * _String1, const wchar_t * _String2); 
#line 481
__declspec(dllimport) int __cdecl _wcsicoll_l(const wchar_t * _String1, const wchar_t * _String2, _locale_t _Locale); 
#line 488
__declspec(dllimport) int __cdecl _wcsncoll(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount); 
#line 495
__declspec(dllimport) int __cdecl _wcsncoll_l(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 503
__declspec(dllimport) int __cdecl _wcsnicoll(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount); 
#line 510
__declspec(dllimport) int __cdecl _wcsnicoll_l(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 569
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsdup. See online help for details" ".")) 
__declspec(dllimport) wchar_t *__cdecl wcsdup(const wchar_t * _String); 
#line 581
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsicmp. See online help for detail" "s.")) 
__declspec(dllimport) int __cdecl wcsicmp(const wchar_t * _String1, const wchar_t * _String2); 




__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsnicmp. See online help for detai" "ls.")) 
__declspec(dllimport) int __cdecl wcsnicmp(const wchar_t * _String1, const wchar_t * _String2, size_t _MaxCount); 
#line 594
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsnset. See online help for detail" "s.")) 

__declspec(dllimport) wchar_t *__cdecl wcsnset(wchar_t * _String, wchar_t _Value, size_t _MaxCount); 
#line 602
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsrev. See online help for details" ".")) 

__declspec(dllimport) wchar_t *__cdecl wcsrev(wchar_t * _String); 



__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsset. See online help for details" ".")) 

__declspec(dllimport) wchar_t *__cdecl wcsset(wchar_t * _String, wchar_t _Value); 




__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcslwr. See online help for details" ".")) 

__declspec(dllimport) wchar_t *__cdecl wcslwr(wchar_t * _String); 



__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsupr. See online help for details" ".")) 

__declspec(dllimport) wchar_t *__cdecl wcsupr(wchar_t * _String); 



__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _wcsicoll. See online help for detai" "ls.")) 
__declspec(dllimport) int __cdecl wcsicoll(const wchar_t * _String1, const wchar_t * _String2); 
#line 637
__pragma( pack ( pop )) 



#pragma warning(pop)
#line 19 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\string.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 
#line 32
__declspec(dllimport) errno_t __cdecl strcpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); 
#line 39
__declspec(dllimport) errno_t __cdecl strcat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); 
#line 46
__declspec(dllimport) errno_t __cdecl strerror_s(char * _Buffer, size_t _SizeInBytes, int _ErrorNumber); 
#line 52
__declspec(dllimport) errno_t __cdecl strncat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); 
#line 60
__declspec(dllimport) errno_t __cdecl strncpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); 
#line 68
__declspec(dllimport) char *__cdecl strtok_s(char * _String, const char * _Delimiter, char ** _Context); 
#line 76
__declspec(dllimport) void *__cdecl _memccpy(void * _Dst, const void * _Src, int _Val, size_t _MaxCount); 
#line 91
char *__cdecl strcat(char * _Destination, const char * _Source); 
#line 100
int __cdecl strcmp(const char * _Str1, const char * _Str2); 
#line 106
__declspec(dllimport) int __cdecl _strcmpi(const char * _String1, const char * _String2); 
#line 112
__declspec(dllimport) int __cdecl strcoll(const char * _String1, const char * _String2); 
#line 118
__declspec(dllimport) int __cdecl _strcoll_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 130
char *__cdecl strcpy(char * _Destination, const char * _Source); 
#line 137
__declspec(dllimport) size_t __cdecl strcspn(const char * _Str, const char * _Control); 
#line 148
__declspec(dllimport) __declspec(allocator) char *__cdecl _strdup(const char * _Source); 
#line 159
__declspec(dllimport) char *__cdecl _strerror(const char * _ErrorMessage); 




__declspec(dllimport) errno_t __cdecl _strerror_s(char * _Buffer, size_t _SizeInBytes, const char * _ErrorMessage); 
#line 178
__declspec(dllimport) char *__cdecl strerror(int _ErrorMessage); 
#line 189
__declspec(dllimport) int __cdecl _stricmp(const char * _String1, const char * _String2); 
#line 195
__declspec(dllimport) int __cdecl _stricoll(const char * _String1, const char * _String2); 
#line 201
__declspec(dllimport) int __cdecl _stricoll_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 208
__declspec(dllimport) int __cdecl _stricmp_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 215
size_t __cdecl strlen(const char * _Str); 




__declspec(dllimport) errno_t __cdecl _strlwr_s(char * _String, size_t _Size); 
#line 230
__declspec(dllimport) char *__cdecl _strlwr(char * _String); 
#line 236
__declspec(dllimport) errno_t __cdecl _strlwr_s_l(char * _String, size_t _Size, _locale_t _Locale); 
#line 248
__declspec(dllimport) char *__cdecl _strlwr_l(char * _String, _locale_t _Locale); 
#line 262
__declspec(dllimport) char *__cdecl strncat(char * _Destination, const char * _Source, size_t _Count); 
#line 271
__declspec(dllimport) int __cdecl strncmp(const char * _Str1, const char * _Str2, size_t _MaxCount); 
#line 278
__declspec(dllimport) int __cdecl _strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 285
__declspec(dllimport) int __cdecl _strnicmp_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 293
__declspec(dllimport) int __cdecl _strnicoll(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 300
__declspec(dllimport) int __cdecl _strnicoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 308
__declspec(dllimport) int __cdecl _strncoll(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 315
__declspec(dllimport) int __cdecl _strncoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 322
__declspec(dllimport) size_t __cdecl __strncnt(const char * _String, size_t _Count); 
#line 334
__declspec(dllimport) char *__cdecl strncpy(char * _Destination, const char * _Source, size_t _Count); 
#line 351
__declspec(dllimport) size_t __cdecl strnlen(const char * _String, size_t _MaxCount); 
#line 367
static __inline size_t __cdecl strnlen_s(const char *
_String, size_t 
_MaxCount) 

{ 
return (_String == (0)) ? (0) : strnlen(_String, _MaxCount); 
} 




__declspec(dllimport) errno_t __cdecl _strnset_s(char * _String, size_t _SizeInBytes, int _Value, size_t _MaxCount); 
#line 392
__declspec(dllimport) char *__cdecl _strnset(char * _Destination, int _Value, size_t _Count); 
#line 401
__declspec(dllimport) char *__cdecl strpbrk(const char * _Str, const char * _Control); 




__declspec(dllimport) char *__cdecl _strrev(char * _Str); 




__declspec(dllimport) errno_t __cdecl _strset_s(char * _Destination, size_t _DestinationSize, int _Value); 
#line 423
char *__cdecl _strset(char * _Destination, int _Value); 
#line 430
__declspec(dllimport) size_t __cdecl strspn(const char * _Str, const char * _Control); 
#line 436
__declspec(dllimport) char *__cdecl strtok(char * _String, const char * _Delimiter); 
#line 442
__declspec(dllimport) errno_t __cdecl _strupr_s(char * _String, size_t _Size); 
#line 452
__declspec(dllimport) char *__cdecl _strupr(char * _String); 
#line 458
__declspec(dllimport) errno_t __cdecl _strupr_s_l(char * _String, size_t _Size, _locale_t _Locale); 
#line 470
__declspec(dllimport) char *__cdecl _strupr_l(char * _String, _locale_t _Locale); 
#line 479
__declspec(dllimport) size_t __cdecl strxfrm(char * _Destination, const char * _Source, size_t _MaxCount); 
#line 487
__declspec(dllimport) size_t __cdecl _strxfrm_l(char * _Destination, const char * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 531
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strdup. See online help for details" ".")) 
__declspec(dllimport) char *__cdecl strdup(const char * _String); 
#line 538
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strcmpi. See online help for detail" "s.")) 
__declspec(dllimport) int __cdecl strcmpi(const char * _String1, const char * _String2); 




__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _stricmp. See online help for detail" "s.")) 
__declspec(dllimport) int __cdecl stricmp(const char * _String1, const char * _String2); 




__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strlwr. See online help for details" ".")) 
__declspec(dllimport) char *__cdecl strlwr(char * _String); 



__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strnicmp. See online help for detai" "ls.")) 
__declspec(dllimport) int __cdecl strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 562
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strnset. See online help for detail" "s.")) 
__declspec(dllimport) char *__cdecl strnset(char * _String, int _Value, size_t _MaxCount); 
#line 569
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strrev. See online help for details" ".")) 
__declspec(dllimport) char *__cdecl strrev(char * _String); 



__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strset. See online help for details" ".")) char *__cdecl 
strset(char * _String, int _Value); 



__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _strupr. See online help for details" ".")) 
__declspec(dllimport) char *__cdecl strupr(char * _String); 
#line 592
#endif /* _INC_STRING */
#line 9 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_math.h"
#ifndef _INC_MATH
#define _INC_MATH
#line 588 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\string.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 14 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_math.h"
#pragma warning(push)
#pragma warning(disable: 4324 4514 4574 4710 4793 4820 4995 4996 28719 28726 28727)


__pragma( pack ( push, 8 )) 




struct _exception { 

int type; 
char *name; 
double arg1; 
double arg2; 
double retval; 
}; 



#ifndef _COMPLEX_DEFINED
#define _COMPLEX_DEFINED

struct _complex { 

double x, y; 
}; 





#endif /* _COMPLEX_DEFINED */
#line 59
typedef float float_t; 
typedef double double_t; 
#line 78
extern const double _HUGE; 





#ifndef _HUGE_ENUF
#define _HUGE_ENUF 1e+300
#endif /* _HUGE_ENUF */
#line 175
void __cdecl _fperrraise(int _Except); 

__declspec(dllimport) short __cdecl _dclass(double _X); 
__declspec(dllimport) short __cdecl _ldclass(long double _X); 
__declspec(dllimport) short __cdecl _fdclass(float _X); 

__declspec(dllimport) int __cdecl _dsign(double _X); 
__declspec(dllimport) int __cdecl _ldsign(long double _X); 
__declspec(dllimport) int __cdecl _fdsign(float _X); 

__declspec(dllimport) int __cdecl _dpcomp(double _X, double _Y); 
__declspec(dllimport) int __cdecl _ldpcomp(long double _X, long double _Y); 
__declspec(dllimport) int __cdecl _fdpcomp(float _X, float _Y); 

__declspec(dllimport) short __cdecl _dtest(double * _Px); 
__declspec(dllimport) short __cdecl _ldtest(long double * _Px); 
__declspec(dllimport) short __cdecl _fdtest(float * _Px); 

__declspec(dllimport) short __cdecl _d_int(double * _Px, short _Xexp); 
__declspec(dllimport) short __cdecl _ld_int(long double * _Px, short _Xexp); 
__declspec(dllimport) short __cdecl _fd_int(float * _Px, short _Xexp); 

__declspec(dllimport) short __cdecl _dscale(double * _Px, long _Lexp); 
__declspec(dllimport) short __cdecl _ldscale(long double * _Px, long _Lexp); 
__declspec(dllimport) short __cdecl _fdscale(float * _Px, long _Lexp); 

__declspec(dllimport) short __cdecl _dunscale(short * _Pex, double * _Px); 
__declspec(dllimport) short __cdecl _ldunscale(short * _Pex, long double * _Px); 
__declspec(dllimport) short __cdecl _fdunscale(short * _Pex, float * _Px); 

__declspec(dllimport) short __cdecl _dexp(double * _Px, double _Y, long _Eoff); 
__declspec(dllimport) short __cdecl _ldexp(long double * _Px, long double _Y, long _Eoff); 
__declspec(dllimport) short __cdecl _fdexp(float * _Px, float _Y, long _Eoff); 

__declspec(dllimport) short __cdecl _dnorm(unsigned short * _Ps); 
__declspec(dllimport) short __cdecl _fdnorm(unsigned short * _Ps); 

__declspec(dllimport) double __cdecl _dpoly(double _X, const double * _Tab, int _N); 
__declspec(dllimport) long double __cdecl _ldpoly(long double _X, const long double * _Tab, int _N); 
__declspec(dllimport) float __cdecl _fdpoly(float _X, const float * _Tab, int _N); 

__declspec(dllimport) double __cdecl _dlog(double _X, int _Baseflag); 
__declspec(dllimport) long double __cdecl _ldlog(long double _X, int _Baseflag); 
__declspec(dllimport) float __cdecl _fdlog(float _X, int _Baseflag); 

__declspec(dllimport) double __cdecl _dsin(double _X, unsigned _Qoff); 
__declspec(dllimport) long double __cdecl _ldsin(long double _X, unsigned _Qoff); 
__declspec(dllimport) float __cdecl _fdsin(float _X, unsigned _Qoff); 
#line 229
typedef 
#line 226
union { 
unsigned short _Sh[4]; 
double _Val; 
} _double_val; 
#line 236
typedef 
#line 233
union { 
unsigned short _Sh[2]; 
float _Val; 
} _float_val; 
#line 243
typedef 
#line 240
union { 
unsigned short _Sh[4]; 
long double _Val; 
} _ldouble_val; 
#line 251
typedef 
#line 246
union { 
unsigned short _Word[4]; 
float _Float; 
double _Double; 
long double _Long_double; 
} _float_const; 

extern const _float_const _Denorm_C, _Inf_C, _Nan_C, _Snan_C, _Hugeval_C; 
extern const _float_const _FDenorm_C, _FInf_C, _FNan_C, _FSnan_C; 
extern const _float_const _LDenorm_C, _LInf_C, _LNan_C, _LSnan_C; 

extern const _float_const _Eps_C, _Rteps_C; 
extern const _float_const _FEps_C, _FRteps_C; 
extern const _float_const _LEps_C, _LRteps_C; 

extern const double _Zero_C, _Xbig_C; 
extern const float _FZero_C, _FXbig_C; 
extern const long double _LZero_C, _LXbig_C; 
#line 470
int __cdecl abs(int _X); 
long __cdecl labs(long _X); 
__int64 __cdecl llabs(__int64 _X); 

double __cdecl acos(double _X); 
double __cdecl asin(double _X); 
double __cdecl atan(double _X); 
double __cdecl atan2(double _Y, double _X); 

double __cdecl cos(double _X); 
double __cdecl cosh(double _X); 
double __cdecl exp(double _X); 
double __cdecl fabs(double _X); 
double __cdecl fmod(double _X, double _Y); 
double __cdecl log(double _X); 
double __cdecl log10(double _X); 
double __cdecl pow(double _X, double _Y); 
double __cdecl sin(double _X); 
double __cdecl sinh(double _X); 
double __cdecl sqrt(double _X); 
double __cdecl tan(double _X); 
double __cdecl tanh(double _X); 

__declspec(dllimport) double __cdecl acosh(double _X); 
__declspec(dllimport) double __cdecl asinh(double _X); 
__declspec(dllimport) double __cdecl atanh(double _X); 
__declspec(dllimport) double __cdecl atof(const char * _String); 
__declspec(dllimport) double __cdecl _atof_l(const char * _String, _locale_t _Locale); 
__declspec(dllimport) double __cdecl _cabs(struct _complex _Complex_value); 
__declspec(dllimport) double __cdecl cbrt(double _X); 
__declspec(dllimport) double __cdecl ceil(double _X); 
__declspec(dllimport) double __cdecl _chgsign(double _X); 
__declspec(dllimport) double __cdecl copysign(double _Number, double _Sign); 
__declspec(dllimport) double __cdecl _copysign(double _Number, double _Sign); 
__declspec(dllimport) double __cdecl erf(double _X); 
__declspec(dllimport) double __cdecl erfc(double _X); 
__declspec(dllimport) double __cdecl exp2(double _X); 
__declspec(dllimport) double __cdecl expm1(double _X); 
__declspec(dllimport) double __cdecl fdim(double _X, double _Y); 
__declspec(dllimport) double __cdecl floor(double _X); 
__declspec(dllimport) double __cdecl fma(double _X, double _Y, double _Z); 
__declspec(dllimport) double __cdecl fmax(double _X, double _Y); 
__declspec(dllimport) double __cdecl fmin(double _X, double _Y); 
__declspec(dllimport) double __cdecl frexp(double _X, int * _Y); 
__declspec(dllimport) double __cdecl hypot(double _X, double _Y); 
__declspec(dllimport) double __cdecl _hypot(double _X, double _Y); 
__declspec(dllimport) int __cdecl ilogb(double _X); 
__declspec(dllimport) double __cdecl ldexp(double _X, int _Y); 
__declspec(dllimport) double __cdecl lgamma(double _X); 
__declspec(dllimport) __int64 __cdecl llrint(double _X); 
__declspec(dllimport) __int64 __cdecl llround(double _X); 
__declspec(dllimport) double __cdecl log1p(double _X); 
__declspec(dllimport) double __cdecl log2(double _X); 
__declspec(dllimport) double __cdecl logb(double _X); 
__declspec(dllimport) long __cdecl lrint(double _X); 
__declspec(dllimport) long __cdecl lround(double _X); 

int __cdecl _matherr(struct _exception * _Except); 

__declspec(dllimport) double __cdecl modf(double _X, double * _Y); 
__declspec(dllimport) double __cdecl nan(const char * _X); 
__declspec(dllimport) double __cdecl nearbyint(double _X); 
__declspec(dllimport) double __cdecl nextafter(double _X, double _Y); 
__declspec(dllimport) double __cdecl nexttoward(double _X, long double _Y); 
__declspec(dllimport) double __cdecl remainder(double _X, double _Y); 
__declspec(dllimport) double __cdecl remquo(double _X, double _Y, int * _Z); 
__declspec(dllimport) double __cdecl rint(double _X); 
__declspec(dllimport) double __cdecl round(double _X); 
__declspec(dllimport) double __cdecl scalbln(double _X, long _Y); 
__declspec(dllimport) double __cdecl scalbn(double _X, int _Y); 
__declspec(dllimport) double __cdecl tgamma(double _X); 
__declspec(dllimport) double __cdecl trunc(double _X); 
__declspec(dllimport) double __cdecl _j0(double _X); 
__declspec(dllimport) double __cdecl _j1(double _X); 
__declspec(dllimport) double __cdecl _jn(int _X, double _Y); 
__declspec(dllimport) double __cdecl _y0(double _X); 
__declspec(dllimport) double __cdecl _y1(double _X); 
__declspec(dllimport) double __cdecl _yn(int _X, double _Y); 

__declspec(dllimport) float __cdecl acoshf(float _X); 
__declspec(dllimport) float __cdecl asinhf(float _X); 
__declspec(dllimport) float __cdecl atanhf(float _X); 
__declspec(dllimport) float __cdecl cbrtf(float _X); 
__declspec(dllimport) float __cdecl _chgsignf(float _X); 
__declspec(dllimport) float __cdecl copysignf(float _Number, float _Sign); 
__declspec(dllimport) float __cdecl _copysignf(float _Number, float _Sign); 
__declspec(dllimport) float __cdecl erff(float _X); 
__declspec(dllimport) float __cdecl erfcf(float _X); 
__declspec(dllimport) float __cdecl expm1f(float _X); 
__declspec(dllimport) float __cdecl exp2f(float _X); 
__declspec(dllimport) float __cdecl fdimf(float _X, float _Y); 
__declspec(dllimport) float __cdecl fmaf(float _X, float _Y, float _Z); 
__declspec(dllimport) float __cdecl fmaxf(float _X, float _Y); 
__declspec(dllimport) float __cdecl fminf(float _X, float _Y); 
__declspec(dllimport) float __cdecl _hypotf(float _X, float _Y); 
__declspec(dllimport) int __cdecl ilogbf(float _X); 
__declspec(dllimport) float __cdecl lgammaf(float _X); 
__declspec(dllimport) __int64 __cdecl llrintf(float _X); 
__declspec(dllimport) __int64 __cdecl llroundf(float _X); 
__declspec(dllimport) float __cdecl log1pf(float _X); 
__declspec(dllimport) float __cdecl log2f(float _X); 
__declspec(dllimport) float __cdecl logbf(float _X); 
__declspec(dllimport) long __cdecl lrintf(float _X); 
__declspec(dllimport) long __cdecl lroundf(float _X); 
__declspec(dllimport) float __cdecl nanf(const char * _X); 
__declspec(dllimport) float __cdecl nearbyintf(float _X); 
__declspec(dllimport) float __cdecl nextafterf(float _X, float _Y); 
__declspec(dllimport) float __cdecl nexttowardf(float _X, long double _Y); 
__declspec(dllimport) float __cdecl remainderf(float _X, float _Y); 
__declspec(dllimport) float __cdecl remquof(float _X, float _Y, int * _Z); 
__declspec(dllimport) float __cdecl rintf(float _X); 
__declspec(dllimport) float __cdecl roundf(float _X); 
__declspec(dllimport) float __cdecl scalblnf(float _X, long _Y); 
__declspec(dllimport) float __cdecl scalbnf(float _X, int _Y); 
__declspec(dllimport) float __cdecl tgammaf(float _X); 
__declspec(dllimport) float __cdecl truncf(float _X); 
#line 595
__declspec(dllimport) float __cdecl _logbf(float _X); 
__declspec(dllimport) float __cdecl _nextafterf(float _X, float _Y); 
__declspec(dllimport) int __cdecl _finitef(float _X); 
__declspec(dllimport) int __cdecl _isnanf(float _X); 
__declspec(dllimport) int __cdecl _fpclassf(float _X); 

__declspec(dllimport) int __cdecl _set_FMA3_enable(int _Flag); 
__declspec(dllimport) int __cdecl _get_FMA3_enable(void); 
#line 615
__declspec(dllimport) float __cdecl acosf(float _X); 
__declspec(dllimport) float __cdecl asinf(float _X); 
__declspec(dllimport) float __cdecl atan2f(float _Y, float _X); 
__declspec(dllimport) float __cdecl atanf(float _X); 
__declspec(dllimport) float __cdecl ceilf(float _X); 
__declspec(dllimport) float __cdecl cosf(float _X); 
__declspec(dllimport) float __cdecl coshf(float _X); 
__declspec(dllimport) float __cdecl expf(float _X); 
#line 678
__inline float __cdecl fabsf(float _X) 
{ 
return (float)fabs(_X); 
} 
#line 687
__declspec(dllimport) float __cdecl floorf(float _X); 
__declspec(dllimport) float __cdecl fmodf(float _X, float _Y); 
#line 704
__inline float __cdecl frexpf(float _X, int *_Y) 
{ 
return (float)frexp(_X, _Y); 
} 

__inline float __cdecl hypotf(float _X, float _Y) 
{ 
return _hypotf(_X, _Y); 
} 

__inline float __cdecl ldexpf(float _X, int _Y) 
{ 
return (float)ldexp(_X, _Y); 
} 



__declspec(dllimport) float __cdecl log10f(float _X); 
__declspec(dllimport) float __cdecl logf(float _X); 
__declspec(dllimport) float __cdecl modff(float _X, float * _Y); 
__declspec(dllimport) float __cdecl powf(float _X, float _Y); 
__declspec(dllimport) float __cdecl sinf(float _X); 
__declspec(dllimport) float __cdecl sinhf(float _X); 
__declspec(dllimport) float __cdecl sqrtf(float _X); 
__declspec(dllimport) float __cdecl tanf(float _X); 
__declspec(dllimport) float __cdecl tanhf(float _X); 
#line 783
__declspec(dllimport) long double __cdecl acoshl(long double _X); 

__inline long double __cdecl acosl(long double _X) 
{ 
return acos((double)_X); 
} 

__declspec(dllimport) long double __cdecl asinhl(long double _X); 

__inline long double __cdecl asinl(long double _X) 
{ 
return asin((double)_X); 
} 

__inline long double __cdecl atan2l(long double _Y, long double _X) 
{ 
return atan2((double)_Y, (double)_X); 
} 

__declspec(dllimport) long double __cdecl atanhl(long double _X); 

__inline long double __cdecl atanl(long double _X) 
{ 
return atan((double)_X); 
} 

__declspec(dllimport) long double __cdecl cbrtl(long double _X); 

__inline long double __cdecl ceill(long double _X) 
{ 
return ceil((double)_X); 
} 

__inline long double __cdecl _chgsignl(long double _X) 
{ 
return _chgsign((double)_X); 
} 

__declspec(dllimport) long double __cdecl copysignl(long double _Number, long double _Sign); 

__inline long double __cdecl _copysignl(long double _Number, long double _Sign) 
{ 
return _copysign((double)_Number, (double)_Sign); 
} 

__inline long double __cdecl coshl(long double _X) 
{ 
return cosh((double)_X); 
} 

__inline long double __cdecl cosl(long double _X) 
{ 
return cos((double)_X); 
} 

__declspec(dllimport) long double __cdecl erfl(long double _X); 
__declspec(dllimport) long double __cdecl erfcl(long double _X); 

__inline long double __cdecl expl(long double _X) 
{ 
return exp((double)_X); 
} 

__declspec(dllimport) long double __cdecl exp2l(long double _X); 
__declspec(dllimport) long double __cdecl expm1l(long double _X); 

__inline long double __cdecl fabsl(long double _X) 
{ 
return fabs((double)_X); 
} 

__declspec(dllimport) long double __cdecl fdiml(long double _X, long double _Y); 

__inline long double __cdecl floorl(long double _X) 
{ 
return floor((double)_X); 
} 

__declspec(dllimport) long double __cdecl fmal(long double _X, long double _Y, long double _Z); 
__declspec(dllimport) long double __cdecl fmaxl(long double _X, long double _Y); 
__declspec(dllimport) long double __cdecl fminl(long double _X, long double _Y); 

__inline long double __cdecl fmodl(long double _X, long double _Y) 
{ 
return fmod((double)_X, (double)_Y); 
} 

__inline long double __cdecl frexpl(long double _X, int *_Y) 
{ 
return frexp((double)_X, _Y); 
} 

__declspec(dllimport) int __cdecl ilogbl(long double _X); 

__inline long double __cdecl _hypotl(long double _X, long double _Y) 
{ 
return _hypot((double)_X, (double)_Y); 
} 

__inline long double __cdecl hypotl(long double _X, long double _Y) 
{ 
return _hypot((double)_X, (double)_Y); 
} 

__inline long double __cdecl ldexpl(long double _X, int _Y) 
{ 
return ldexp((double)_X, _Y); 
} 

__declspec(dllimport) long double __cdecl lgammal(long double _X); 
__declspec(dllimport) __int64 __cdecl llrintl(long double _X); 
__declspec(dllimport) __int64 __cdecl llroundl(long double _X); 

__inline long double __cdecl logl(long double _X) 
{ 
return log((double)_X); 
} 

__inline long double __cdecl log10l(long double _X) 
{ 
return log10((double)_X); 
} 

__declspec(dllimport) long double __cdecl log1pl(long double _X); 
__declspec(dllimport) long double __cdecl log2l(long double _X); 
__declspec(dllimport) long double __cdecl logbl(long double _X); 
__declspec(dllimport) long __cdecl lrintl(long double _X); 
__declspec(dllimport) long __cdecl lroundl(long double _X); 

__inline long double __cdecl modfl(long double _X, long double *_Y) 
{ 
double _F, _I; 
_F = modf((double)_X, &_I); 
*_Y = _I; 
return _F; 
} 

__declspec(dllimport) long double __cdecl nanl(const char * _X); 
__declspec(dllimport) long double __cdecl nearbyintl(long double _X); 
__declspec(dllimport) long double __cdecl nextafterl(long double _X, long double _Y); 
__declspec(dllimport) long double __cdecl nexttowardl(long double _X, long double _Y); 

__inline long double __cdecl powl(long double _X, long double _Y) 
{ 
return pow((double)_X, (double)_Y); 
} 

__declspec(dllimport) long double __cdecl remainderl(long double _X, long double _Y); 
__declspec(dllimport) long double __cdecl remquol(long double _X, long double _Y, int * _Z); 
__declspec(dllimport) long double __cdecl rintl(long double _X); 
__declspec(dllimport) long double __cdecl roundl(long double _X); 
__declspec(dllimport) long double __cdecl scalblnl(long double _X, long _Y); 
__declspec(dllimport) long double __cdecl scalbnl(long double _X, int _Y); 

__inline long double __cdecl sinhl(long double _X) 
{ 
return sinh((double)_X); 
} 

__inline long double __cdecl sinl(long double _X) 
{ 
return sin((double)_X); 
} 

__inline long double __cdecl sqrtl(long double _X) 
{ 
return sqrt((double)_X); 
} 

__inline long double __cdecl tanhl(long double _X) 
{ 
return tanh((double)_X); 
} 

__inline long double __cdecl tanl(long double _X) 
{ 
return tan((double)_X); 
} 

__declspec(dllimport) long double __cdecl tgammal(long double _X); 
__declspec(dllimport) long double __cdecl truncl(long double _X); 
#line 984
extern double HUGE; 




__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _j0. See online help for details.")) __declspec(dllimport) double __cdecl j0(double _X); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _j1. See online help for details.")) __declspec(dllimport) double __cdecl j1(double _X); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _jn. See online help for details.")) __declspec(dllimport) double __cdecl jn(int _X, double _Y); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _y0. See online help for details.")) __declspec(dllimport) double __cdecl y0(double _X); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _y1. See online help for details.")) __declspec(dllimport) double __cdecl y1(double _X); 
__declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name: _yn. See online help for details.")) __declspec(dllimport) double __cdecl yn(int _X, double _Y); 
#line 1002
#endif /* _INC_MATH */
#line 5 "C:\\Users\\JIAPEN~1\\AppData\\Local\\Temp\\cxxfe_27937879536482.in"
#ifndef RTWTYPES_H
#define RTWTYPES_H

#endif /* RTWTYPES_H */
#line 2 "d:\\00myfolder\\adas\\tosaeb\\tosaeb_20240814\\interface\\my_func.h"
#ifndef _MY_FUNC_H_
#define _MY_FUNC_H_
#line 999 "D:\\Windows Kits\\10\\include\\10.0.22621.0\\ucrt\\corecrt_math.h"
__pragma( pack ( pop )) 

#pragma warning(pop)
#line 12 "d:\\00myfolder\\adas\\tosaeb\\tosaeb_20240814\\interface\\my_func.h"
typedef 
#line 7
enum { 
RED, 
YELLOW, 
GREEN, 
UNKNOWN
} TrafficLightColor; 



typedef 
#line 14
struct { 
int input; 
} SIGNALBUS; 




typedef 
#line 18
struct { 
int upper_saturation_limit; 
int lower_saturation_limit; 
} LIMITBUS; 




typedef 
#line 23
struct { 
SIGNALBUS inputsignal; 
LIMITBUS limits; 
} COUNTERBUS; 


extern double add(double u1, double u2); 
extern double timesK(double u, double K); 
extern void incrementElement(int * u, unsigned size, unsigned increment_idx); 
extern TrafficLightColor getNextTrafficLight(TrafficLightColor current); 
extern void counterbusFcn(const COUNTERBUS * u1, int u2, COUNTERBUS * y1, int * y2); 

#endif /* _MY_FUNC_H_ */
