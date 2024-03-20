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
    printf("\nTotal number of nodes = %d")
}