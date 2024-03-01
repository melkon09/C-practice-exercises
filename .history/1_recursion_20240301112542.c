#include <stdio.h>
#include <stdlib.h>

int function(int x)
{
    int z=1;
    if (x > 1)
        z = x * function(x-1);
    return z;    
}

int main()
{
    int a;
    printf("Give me a number: ");
    scanf("%d", &a);
    printf("The ")
}