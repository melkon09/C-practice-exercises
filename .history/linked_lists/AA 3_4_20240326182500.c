#include <stdio.h>
#include <stdint.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node LIST_NODE;
typedef struct node *