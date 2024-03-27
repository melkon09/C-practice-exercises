


typedef int elem;

struct stack
{
    elem array[STACK_SIZE];
    int top;
};

typedef struct stack STACK;

void ST_init(STACK *s);
int ST_empty(STACK s);
int ST_full(STACK s);


int main()
{






}


/* ST_init(): arxikopoiei th lista */
void ST_init(STACK *s)
{
    s->top = -1;
}

/* ST_empty(): epostrefei TRUE/FALSE analoga me to an i stoiva einai adeia */
int ST_empty(STACK s)
{
    return s.top == -1;
}

/* ST_full(): epostrefei TRUE/FALSE analoga me to an i stoiva einai gemath */
int ST_full(STACK s)
{
    return s.top == STACK_SIZE - 1;
}

/* ST_push(): Eisagei to x sti stoiva s,  epistrefei TRUE: se periptosh epitixias
 * h FALSE: se periptosi apotyxias */
int ST_push(STACK *s, elem x)
{
    if (ST_full(*s))
        return FALSE;
    else
    {
        s->top++;               /* metakinoume to top */
        s->array[s->top] = x;   /* topothetoume ta dedomena sth thesh top */
        return TRUE;
    }    
}

 /* ST_pop(): Kanei eksagogi tou stoixeio pou einai sthn koryfh ths listas
  * epistrefei TRUE/ FALSE analoga me thn epityxia/ apotyxia */
  int ST_pop( STACK *s, elem *x)
  {
    if (ST_empty(*s))
        return FALSE;
    else
    {
        *x = s->array[s->top];
        s->top--;
        return TRUE;
    }    
  }