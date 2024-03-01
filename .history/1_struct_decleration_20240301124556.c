#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct {
        int a;
        int b;
    } x,y;
    x.a=10;
    y=x;
    printf("%d\n", y.a);
    system("PAUSE");
    return (0);
}