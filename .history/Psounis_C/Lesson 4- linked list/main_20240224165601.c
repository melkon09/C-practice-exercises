#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

main()
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

    printf("")

















}