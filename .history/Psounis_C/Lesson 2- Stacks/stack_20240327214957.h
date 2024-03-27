/* stack.h: Dhlwseis stoivas */ 



#define TRUE 1
#define FALSE 0

#define STACK_SIZE 10

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
