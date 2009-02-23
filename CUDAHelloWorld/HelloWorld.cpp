#include <time.h>

#include "HelloWorld.h"

float ST_SimpleAddKernel( float * pA, float * pB, float * pC, int n)
{
    clock_t start, stop;

    start = clock();

    for (int idx = 0; idx < n; idx++)
    {
        pC[idx] = pA[idx] + pB[idx];
    }

    stop = clock();

    float cpuTime = (stop - start)  * 1000.0f / CLOCKS_PER_SEC;

    return cpuTime;
}

