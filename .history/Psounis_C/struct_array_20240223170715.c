/* Epeksergasia enos pinaka apo stignmiotypa dimis */

#include <stdio.h>
#include <stdlib.h>

#define STRING_SIZE 100

struct epafi {
    char name[STRING_SIZE];
    char phone[STRING_SIZE];
};

int main()
{
    struct  epafi *pinakas;
    int i, N;

    /* 1. Eisagogi tis diastasis tou pinaka */
    printf("Dwse plithos epafwn: ");
    scanf("%d", &N);

    /* 2. Desmeusi mnimis */
    pinakas = malloc(sizeof(struct epafi)*N);
    if (!pinakas)
    {
        printf("Adynamia desmeusis mnimis");
        exit(0);
    }

    /* 3. Diavasma epafwn */
    fflush(stdin);
    for (i=0; i<N; i++)
    {
        printf("Dwse onomateponimo %dou atomou: ", i+1);
        gets(pinakas[i])
    }

}
