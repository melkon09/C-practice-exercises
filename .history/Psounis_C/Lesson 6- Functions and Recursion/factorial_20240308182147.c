/* factiorial.c: Ypologizei to paragontiko enos fysikoy arithmou */

#include <stdio.h>

int factorial(int n);

int main()
{
    int x;
    int res;

    printf("Dwse enan fysiko arithmo: ");
    scanf("%d", &x);

    res=factiorial(x);

    printf("%d!=%d", x, res);
}

int factorial(int n)
{
    int y;

    if (n==1)
        return 1;
    else
    {
        y=factorial(n-1);
        return y*x

    }    
}