#include <stdio.h>
#include <ctype.h>

struct cat
{
    int age;
    int height;
    char name[20];
    char father[20];
    char mother[20];
    struct cat *next;           /* Next node pointer     */
    struct cat *previous;       /* Previous node pointer */
};

typedef struct cat cat;
int main()
{
    cat *first = NULL;
    cat *current = NULL;
    cat *last = NULL;

    char test = "\0";

    for ( ; ; )
    {
        printf("\nDo you want to enter details of a%s cat (Y or N)? ", )
    }

}