/* factiorial.c: Ypologizei to paragontiko enos fysikoy arithmou */

#include <stdio.h>

int factiorial(int n);

int main()
{
    int x;
    int res;

    printf("Dwse enan fysiko arithmo: ");
    scanf("%d", &x);

    res=factiorial(x);

    printf("%d!=%d", x, res);
}

int factiorial(int n)
{
    int y;

    if (n==1)
        return 1
}