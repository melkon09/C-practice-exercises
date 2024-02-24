#include <stdio.h>

#define STR_LENGTH 80

/* 1. Dilosi domis */
struct person
{
    char *onoma;
    char *diefthinsi;
    char *arithmos;
    char *nomos;
};

/* 2. Dilosi synonomou me typedef */
typedef struct person RECORD;

/* 3. Orismos synartisis arxikopoiisis*/
void read_record(RECORD *p);

/* 4. Orismos synartisis emfanisis stoixeiwn */
void print_record(RECORD A);

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
