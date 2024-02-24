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
void init_array(RECORD *p, int x);
void free_array(RECORD x)

int main()
{
    RECORD *pinakas;
    int i, n;

    printf("Dwse to megethos tou pinaka: ");
    scanf("%d", &n);

    /* Arxikopoiisi tws stigmiotypwn */
    for (i=0; i<n; i++)
    {
        init_record(&pinakas[i]);
    }

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

    /* Apodesmeusi mnimis */
    for (i=0; i<n; i++)
    {
        free_record(pinakas[i]);
    }
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

void init_array(RECORD *p, int x)
{
    p=malloc(sizeof(RECORD)*x);
    if (!p)
    {
        printf("Adynamia desmefsis mnimis");
        exit(0);
    }
}