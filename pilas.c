#include <stdio.h>
#include <stdlib.h>
#include "pilas.h"

void create_stack(stack *pila){
   pila->top = -1;
}

int is_empty(stack *pila){
    return pila->top== -1;
}

int is_full(stack *pila){
    return pila->top== MAX_SIZE -1;
}

void push(stack *pila, char character){

    if(is_full(pila)){
        puts("overflow!");
        return;
    }else{
        pila->array[++pila->top] = character;
    }


}

char pop(stack *pila){

    if(is_empty(pila)){
        puts("underflow!");
        exit(1);
    }
    return pila->array[pila->top--];
}


char peek(stack *pila){
    char aux = pop(pila);
    push(pila,aux);
    return aux;
}