#include <stdio.h>


typedef struct Student
{
    char name[50];
    int age;
    float totalMarks;
} Student;

int main()
{
    Student std[2];
    int i;

    for (i=0; i<2; i++)
    {
        printf("Input details for student no. %d\n", i+1);
        printf("Name: ");
        scanf("%s", std[i].name);
        printf("Age: ");
        scanf("%d", &std[i].age);
        printf("Total Marks: ");
        scanf("%f", &std[i].totalMarks);
    }


    for (i=1; i<2; i++)
    {
        printf("\nStudent %d information:\n", i+1);
        printf("Name: %s\n", std[i].name);
        printf("Age: %d", std[i].age);
        printf("Total Marks: %f", std[i].totalMarks);
    }


    float averageMarks = (std[0].totalMarks + std[1].totalMarks)/2;

    printf("Average Marks: %f", averageMarks);

    return 0;


}