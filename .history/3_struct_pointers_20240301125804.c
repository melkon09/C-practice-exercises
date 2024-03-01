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
        printf("\nDo you want to enter details of a%s cat (Y or N)? ", first == NULL?"nother ": "");
        scanf("%c", &test);
        if (tolower(test)=='n')
            break;

        current = (cat*)malloc(sizeof(cat));

        if (first==NULL)
        {
            first = current;                //δείκτης στον πρώτο κόμβο
            current->previous = NULL;
        }    
        else
        {
            last->next = current;           //επόμενος κόμβος
            current->previous - last;
        }
        printf("\nEnter the name of the cat: ");
        scanf("%s", current -> name );
        printf("\nHow old is %s? ", current -> name);
        scanf("%d", &current -> age);
        printf("\nHow high is %s ( in hands )? ", current -> name);
        scanf("%d", &current -> height);
        printf("\nWho is %s's father? ", current -> name);
        scanf("%s", current -> father);
        printf("\nWho is %s's mother? ", current -> name);
        scanf("%s", current -> mother);
        current -> next = NULL; //για την περίπτωση που είναι τελευταία
        last = current;
    }
    while(current != NULL)
    {
        printf("\n\n%s is %d years old, %d hands high,",
        current->name, current->age, current->height);
        printf(" and has %s and %s as parents.", current->father,
        current->mother);
        last = current;
        current = current->previous; //δείκτης στον προηγούμενο κόμβο
        free(last); //απελευθέρωση μνήμης
    }
    return (0);
}