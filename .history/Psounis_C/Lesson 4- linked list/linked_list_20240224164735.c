/* linked_list.c : Kwdikas tis vivliothikis sindedemenis listas */
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

/* LL_init() : arxikopoiei tin lista */
void LL_init(LIST_PTR *head)
{
    *head = NULL;
}

/* LL_empty(): epistrefei TRUE/FALSE analoga me to an i lista einai adeia */
int LL_empty(LIST_PTR head)
{
    return head == NULL;    /* Epistrefei 1 (TRUE) h 0 (FALSE)*/
}

/* LL_data() : epistrefei ta dedomena tou komvou pou deixnei o deiktis p */ 
elem LL_data(LIST_PTR p)
{
    return p->data;
}

/* LL_insert_start(): Eisagei to stoixeio x sthn arxi ths listas */
int LL_insert_start(LIST_PTR *head, elem x)
{
    LIST_PTR newnode;   /* deiktis sto neo komvo */

    newnode=(LIST_NODE *)malloc(sizeof(LIST_NODE));
    if (!newnode)
    {
        printf("Adynamia desmeusis mnimis");
        return FALSE;
    }

    newnode->data=x;    /* Perasma orismatos sta dedomena komvou*/

    newnode->next=*head; /* H timi tou deikth*/
    *head=newnode;
    return TRUE;
}

/* LL_insert_after(): Eisagei to stoixeio x meta to stoixeio pou deixnei o p */
