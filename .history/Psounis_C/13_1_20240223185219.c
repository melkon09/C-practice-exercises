#include <stdio.h>

struct point{
    float x;
    float y;
};

void read_point(struct point *p);
float eukleidia_apostasi(struct  point A, struct point B);

int main()
{
    struct point A, B;
    printf("1o simeio: \n");
    read_point(&A);
    rintf("1o simeio: \n");
    read_point(&A);


}

void read_point(struct point *p)
{
    printf("Dwse tin x syntetagmeni: ");
    scanf("%f", &p->x);     /* O telestis '->' exei megalyteri protereotita */

    printf("Dwse tin y syntetagmeni: ");
    scanf("%f", &p->y);
}

float eukleidia_apostasi(struct  point A, struct point B)
{
    return sqrt(pow(A.x-B.x,2)+pow(A.y-B.y,2));
}