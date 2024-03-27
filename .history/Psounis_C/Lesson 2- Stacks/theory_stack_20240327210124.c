#define STACK_SIZE 10

typedef int elem;

struct stack
{
    elem array[STACK_SIZE];
    int top;
};

typedef struct stack STACK;


/* ST_init(): arxikopoiei th lista */
void ST_init(STACK *s)
{
    s->top
}