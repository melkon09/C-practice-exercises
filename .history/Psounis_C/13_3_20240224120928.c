#include <stdio.h>

#define SIZE 80

struct person
{
    char *onoma;
    char *diefthinsi;
    char *arithmos;
    char *nomos;
};

typedef struct person RECORD;

void read_record(RECORD *p);
void print_record(RECORD x);

int main()
{
    RECORD A, B;

    printf("1o atomo: \n");
    read_record(&A);
    
    printf("2o atomo: \n");
    read_record(&B);

    print_record(A);
    print_record(B);

}

void read_record(RECORD *p)
{
    printf("Dwse onoma: ");
    scanf("%s", p->onoma);
    printf("Dwse diefthinsi: ");
    scanf("%s", p->diefthinsi);
    printf("Dwse arithmo: ");
    scanf("%s", p->arithmos);
    printf("Dwse nomo: ");
    scanf("%s", p->nomos);
}

void print_record(RECORD x)
{
    printf("Onoma     : %s\nDiefthinsi: %s\nArithmos  : %s\nNomos     : %s\n\n", x.onoma, x.diefthinsi, x.arithmos, x.nomos);
}
