#include "cola.h"
#include <stdio.h>
#include <stdlib.h>


static void delete(Queeu *queeu) {
    for (int i = 0; i < MAX_SIZE - 1; i++) {
        queeu->array[i] = queeu->array[i + 1];
    }
    queeu->size--;
}

void create_queeu(Queeu *queeu) {
    queeu->size = 0;
}

int is_empty(Queeu *queeu) {

    return queeu->size == 0;
}

int is_full(Queeu *queeu) {
    return queeu->size == MAX_SIZE - 1;
}

void push(Queeu *queeu, char character) {

    if (!is_full(queeu)) {
        queeu->array[queeu->size] = character;
        queeu->size++;
    } else {
        puts("overflow");
        return;
    }

}


char pop(Queeu *queeu) {

    char aux;
    if (!is_empty(queeu)) {

        aux = queeu->array[0];
        delete(queeu);
        return aux;

    } else {
        puts("underflow");
        exit(1);
    }



}