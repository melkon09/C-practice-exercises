#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
#

int main()
{
    int elem;
    LIST_PTR head, prev, current;       /* Dilwsi kenis listas */

    LL_init(&head);

    /* Eisagogi too "1" */
    LL_insert_start(&head, 1);

    printf("\n");
    LL_print(head);

    /* Eisagogi toy "2" stin arxi */
    LL_insert_start(&head, 2);

    printf("\n");
    LL_print(head);

    /* Eisagogi toy "3" meta to 1o stoixeio*/
    LL_insert_after(head, 3);

    printf("\n");
    LL_print(head);

    /* Eisagogi tou "4" meta to 2o stoixeio */
    LL_insert_after(head->next, 4);

    printf("\n");
    LL_print(head);    

    /* Eisagogi tou "5" stin arxi */
    LL_insert_start(&head, 5);

    printf("\n");
    LL_print(head);

    /* Eisagogi tou "6" stin arxi */
    LL_insert_start(&head, 6);

    printf("\n");
    LL_print(head);

    /* Eisagogi tou "7" sto telos */
    current=head;
    prev=current;
    while(current->next!=NULL)
    {
        prev=current;
        current=current->next;
    }
    LL_insert_after(prev, 7);

    printf("\n");
    LL_print(head);

    /* Diagrafi tou 1ou stoixeiou */
    LL_delete_start(&head,&elem);

    printf("\n");
    LL_print(head);

    /* Diagrafi tou teleutaiou stoixeiou */
    current=head;
    while(current->next!=NULL)
    {
        prev=current;
        current=current->next;
    }
    LL_delete_after(prev, &elem);

    printf("\n");
    LL_print(head);

    LL_destroy(&head);
}