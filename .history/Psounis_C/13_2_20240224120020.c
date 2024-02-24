#include <stdio.h>

#define STR_LENGTH 80

/* 1. Dilosi domis */
struct person
{
    char onoma[STR_LENGTH];
    char diefthinsi[STR_LENGTH];
    char arithmos[STR_LENGTH];
    char nomos[STR_LENGTH];
};

/* 2. Dilosi synonomou me typedef */
typedef struct person RECORD;

/* 3. Orismos synartisis arxikopoiisis*/
void read_record(RECORD *p);

/* 4. Orismos synartisis emfanisis stoixeiwn */
void print_record(record A);

int main()
{
    record A, B;

    read_record(&A);
    read_record(&B);

    print_record(A);
    print_record(B);

}

void read_record(record *p)
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

void print_record(record A)
{
    printf("Onoma     : %s\nDiefthinsi: %s\nArithmos  : %s\nNomos     : %s\n\n", A.onoma, A.diefthinsi, A.arithmos, A.nomos);
}
