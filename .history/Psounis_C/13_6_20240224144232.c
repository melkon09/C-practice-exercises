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
void free_record(RECORD x);
void copy_record(RECORD *dest, RECORD src);

int main()
{
    RECORD *pinakas, x;
    int i, n, choice;

    printf("Dwse to megethos tou pinaka: ");
    scanf("%d", &n);

    pinakas=malloc(sizeof(RECORD)*n);
    if (!pinakas)
    {
        printf("Adynamia desmeusis mnimis");
        exit(0);
    }

    /* Arxikopoiisi tws stigmiotypwn */
    for (i=0; i<n; i++)
    {
        init_record(&pinakas[i]);
    }
    init_record

    /* Diiavasma dedomenwn twn stigmiotypwn */

    for (i=0; i<n; i++)
    {
        printf("**%do atomo**\n", i+1);
        read_record(&pinakas[i]);
    }

    /* Emfanisi dedomenwn */
    for (i=0; i<n; i++)
    {
        print_record(pinakas[i]);
    }

    /* Antigrafi toy stigmiotypou */
    printf("\n\n Epelekse eggrafi gia antigrafi (0-%d)", n-1);
    scanf("%d",&choice);

    copy_record(&x, pinakas[choice]);

    printf("\n\nEktypwsi stigmiotypou: ");
    print_record(x);


    /* Apodesmeusi mnimis */
    for (i=0; i<n; i++)
    {
        free_record(pinakas[i]);
    }

    free(pinakas);
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
    printf("\n%s: %s %s, %s", x.onoma, x.diefthinsi, x.arithmos, x.nomos);
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
    if(!p->arithmos)
    {
        printf("Adynamia desmeusis mnimis!");
        exit(0);
    }    
    p->nomos = malloc(sizeof(char)*SIZE);
    if(!p->nomos)
    {
        printf("Adynamia desmeusis mnimis!");
        exit(0);
    }
}

void free_record(RECORD x)
{
    free(x.onoma);
    free(x.diefthinsi);
    free(x.arithmos);
    free(x.nomos);
}

void copy_record(RECORD *dest, RECORD src)
{
    strcpy(dest->onoma, src.onoma);
    strcpy(dest->diefthinsi, src.diefthinsi);
    strcpy(dest->arithmos, src.arithmos);
    strcpy(dest->nomos, src.nomos);
}
