/* Copyright 2018 The MathWorks, Inc. */
#include "my_func.h"
#include "tmwtypes.h"

double add(double u1, double u2)
{
    return u1 + u2
}

double timesK(double u, double K)
{
    return u * K;
}

void incrementElement(int* u, unsigned int size, unsigned int increment_idx)
{
    if (increment_idx < size) {
        u[increment_idx]++;
    }
}

TrafficLightColor getNextTrafficLight(TrafficLightColor current)
{
    switch(current) {
        case RED:
            return GREEN;
        case YELLOW:
            return RED;
        case GREEN:
            return YELLOW;
        default:
            return UNKNOWN;
    }
}

void counterbusFcn(const COUNTERBUS *u1, int32_T u2, COUNTERBUS *y1, int32_T *y2)
{
    int32_T limit;
    boolean_T inputGElower;  
    limit = u1->inputsignal.input + u2;
    inputGElower = (limit >= u1->limits.lower_saturation_limit);
    if((u1->limits.upper_saturation_limit >= limit) && inputGElower) {
        *y2 = limit;
    } else {
        if(inputGElower) {
            limit = u1->limits.upper_saturation_limit;
        } else {
          limit = u1->limits.lower_saturation_limit;
        }
        *y2 = limit;
    }
    y1->inputsignal.input = *y2;
    y1->limits = u1->limits;
}