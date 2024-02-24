#include <stdio.h>

#define STR_LENGTH 80

/* 1. Dilosi domis */
struct record
{
    char onoma[STR_LENGTH];
    char diefthinsi[STR_LENGTH];
    char arithmos[STR_LENGTH];
    char nomos[STR_LENGTH];
};

/* 2. Dilosi synonomou me typedef */
typedef struct record record;

void read_record(record *p);


int main()
{









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
    scanf("%s", p->diefthinsi);
}

