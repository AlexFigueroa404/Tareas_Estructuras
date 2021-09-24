#ifndef STACK_PILAS_H
#define STACK_PILAS_H

#define MAX_SIZE 10

typedef struct {
    int top;
    char array[MAX_SIZE];
}stack;

void create_stack(stack * pila);
int is_empty(stack *pila);
int is_full(stack *pila);
void push(stack *pila, char character);
char pop(stack *pila);
char peek(stack *pila);
#endif
