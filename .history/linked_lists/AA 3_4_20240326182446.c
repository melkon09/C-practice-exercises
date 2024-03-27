#include <stdio.h>
#include <stdint.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node LIST;
typedef str