#include <stdio.h>

struct point{
    float x;
    float y;
};

void read_point(struct point *p);

int main()
{

}


void read_point(struct point *p)
{
    printf("Dwse tin x syntetagmeni: ");
    scanf("%f", &p->x);     /* O telestis '->' exei megalyteri protereotita */

    printf("Dwse tin x syntetagmeni: ");
    scanf("%f", &p->x);     /* O telestis '->' exei megalyteri protereotita */
}