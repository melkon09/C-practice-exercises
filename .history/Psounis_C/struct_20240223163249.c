#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
};

struct person{
    char name[30];
    char surname[30];
    struct date gennisi;
};

main()
{
    struct person p;
    printf("Dwse to onoma: ");
    scanf("%s", p.name);

    printf("Dwse to eponimo: ");
    scanf("%s", p.surname);

    printf("Dwse imera gennisis: ");
    scanf("%d", &p.gennisi.day);

    printf("Dwse mhna gennisis: ");
    scanf("%d", &p.gennisi.month);

    printf("Dwse etos gennisis");
    scanf("%d")
    
}