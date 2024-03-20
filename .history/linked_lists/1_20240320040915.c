#include <stdio.h>

struct node
{
    int data;
    struct node *nextptr;
    {
        /* data */
    };
    
} *stnode;

void createNodeList (int n);
void displayList();

int main()
{
    int n;

    printf("\n\nLinked List: To create and display Singly Linked Lists: \n");
    printf("------------------------------------------------------------\n");

    printf("Input number of nodes: ");
    
    createNodeList(n);

    printf("\nData entered in the list: \n");
    displayList();

    return 0;

    void createNodeList(int n)
    {
        struct node *fnNode, *tmp;
        int num, i;
        
        stnode = (struct node *)malloc(sizeof(struct node));

        if (stnode==NULL)
        {
            printf("Memory cannot be allocated.");
        }
        else
        {
            printf("Input data for node 1: ");
            scanf("%d", &num);
            stnode->num=num;
            stnode->nextptr=NULL;
            tmp=stnode;

            for (i = 2; i <=n; i++)
            {
                fnNode=(struct node *)malloc(sizeof(struct node))
            }
        }
    }




}


