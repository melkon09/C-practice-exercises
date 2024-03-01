#include <stdio.h>

#define N 10

int weights[N], heights[N];

void init_arrays(int *weights, int *heights)
{
    int i;
    for (i=0; i< N; i++)
    {
        weights[i]=0;
        heights[i]=0;
    }    
}