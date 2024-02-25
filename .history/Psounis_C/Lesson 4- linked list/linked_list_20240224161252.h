/* queue.h : Dilwseis syndedemenhs listas */

#define TRUE 1
#define FALSE 0

typedef int elem;       /* typos dedomenwn listas */

struct node{            /* typos komvoy listas */
    elem data;          /* dedomena */
    struct node *next;  /* epomenos */
};

typedef struct node LIST_NODE;  /* Synonimo tou komvou listas */
typedef struct node *LIST_PTR;  /* Synonymo tou deikti komvou */

void LL_init(LIST_PTR *head);
int LL_empty(LIST_PTR *head);
elem LL_data(LIST_PTR p);
int LL_insert_start(LIST_PTR *head, elem x);
int LL_insert_after(LIST_PTR p, elem x);
int LL_delete_start(LIST)

