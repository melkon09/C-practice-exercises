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

int main()
{
    struct cat *first = NULL;
}