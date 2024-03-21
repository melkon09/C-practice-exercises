#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *nextptr;
} *stnode;

void createNodeList(int n);
int NodeInsertAtEnd(int num);
void displayList();

int main()
{
    int n, num;
    printf("\n\nLinked List: Create a singly linked list and count the number of nodes: \n");
    printf("----------------------------------------------------------------------------\n");

    printf("Input the number of nodes: ");
    scanf("%d", &n);

    createNodeList(n);
    printf("\nData entered in the list are: \n");
    displayList();

    printf("Input data to insert at the end of the list: ");
    scanf("%d",&num);

    NodeInsertAtEnd(num);

    printf("\nData after inserted in the list are: \n");
    displayList();

    return 0;
}

void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;

    stnode= (struct node *)malloc(sizeof(struct node));

    if (stnode==NULL)
    {
        printf("Memory cannot be allocated.");
    }
    else
    {
        printf("Input data for node 1 : ");
        scanf("%d", &num);
        stnode->num = num;
        stnode->nextptr=NULL;
        tmp = stnode;

        for (i=2; i<=n; i++)
        {
            fnNode=(struct node *)malloc(sizeof(struct node));

            if (fnNode == NULL)
            {
                printf("Memory cannot be allocated.");
            }
            else
            {
                printf("Input data for node %d : ", i);
                scanf("%d", &num);

                fnNode->num = num;
                fnNode->nextptr = NULL;

                tmp->nextptr = fnNode;
                tmp=tmp->nextptr;

            }
        }
    }
}

int NodeInsertAtEnd(int num)
{
    struct node *fnNode, *tmp;
    fnNode = (struct node *)malloc(sizeof(struct node));
    if (fnNode == NULL)
        printf("Memory cannot be allocated.");
    else
    {
        fnNode->num = num;
        fnNode->nextptr = NULL;
        tmp = stnode;
        while (/* condition */)
        {
            /* code */
        }
        
    }






}

void displayList()
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf("No data found in the list.");
    }
    else
    {
        tmp = stnode;
        while (tmp != NULL)
        {
            printf("Data = %d\n", tmp->num);
            tmp=tmp->nextptr;
        }
        
    }   
}