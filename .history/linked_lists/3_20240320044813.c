#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *nextptr;
} *stnode;

void createNodeList(int n);
int NodeCount();
void displayList();

int main()
{
    int n, totalNode;
    printf("\n\nLinked List: Create a singly linked list and count the number of nodes: \n");
    printf("----------------------------------------------------------------------------\n");

    printf("Input the number of nodes: ");
    scanf("%d", &n);

    createNodeList(n);
    printf("\nData entered in the list are: \n");
    displayList();

    totalNode=NodeCount();
    printf("\nTotal number of nodes = %d\n", totalNode);

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
        printf("Input data for node 1: ");
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
                printf("Input data ")
            }
        }
    }
}