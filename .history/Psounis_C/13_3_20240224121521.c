#include <stdio.h>
#include <stdlib.h>

#define SIZE 80

struct person{
    char *onoma;
    char *diefthinsi;
    char *arithmos;
    char *nomos;
};

typedef struct person RECORD;

void read_record(RECORD *p);
void print_record(RECORD x);
void init_record(RECORD *p);

int main()
{
    RECORD a, b;

    printf("1o atomo: \n");
    read_record(&a);
    printf("2o atomo: \n");
    read_record(&b);

    print_record(a);
    print_record(b);
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

void init_record(RECORD *p)
{
    p->onoma = malloc(sizeof(char)*SIZE);
    if(!p->onoma)
    {
        printf("Adynamia desmeusis mnimis!");
        exit(0);
    }

    p->diefthinsi = malloc(sizeof(char)*SIZE);
    if(!p->diefthinsi)
    {
        printf("Adynamia desmeusis mnimis!");
        exit(0);
    }
    p->arithmos = malloc(sizeof(char)*SIZE);
    p->nomos = malloc(sizeof(char)*SIZE);

}