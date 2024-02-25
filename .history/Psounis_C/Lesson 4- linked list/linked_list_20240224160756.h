/* queue.h : Dilwseis syndedemenhs listas */

#define TRUE 1
#define FALSE 0

typedef int elem;

struct node{
    elem data;
    struct node *next;
};

typedef struct node LIST_NODE;
typedef struct node *LIST