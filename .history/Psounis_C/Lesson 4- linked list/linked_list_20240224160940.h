/* queue.h : Dilwseis syndedemenhs listas */

#define TRUE 1
#define FALSE 0

typedef int elem;       /* typos dedomenwn listas */

struct node{            /* typos komvoy listas */
    elem data;          /* dedomena */
    struct node *next;  /* epomenos */
};

typedef struct node LIST_NODE;  /* Synonimo toy komvoy listas */
typedef struct node *LIST_PTR;

