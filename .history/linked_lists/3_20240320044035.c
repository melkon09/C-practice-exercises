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
    printf("\n\nLinked List: Create a singly linked list and count the number of nodes: ")
}