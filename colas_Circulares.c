#include "colas_Circulares.h"
#include <stdio.h>



void create_queeu(Queeu *queeu) {
    queeu->head = -1;
    queeu->tail = -1;
    queeu->elements = 0;
}

int is_full(Queeu *queeu) {
    return queeu->elements == MAX_SIZE;
}

int is_empty(Queeu *queeu) {
    return queeu->elements == 0;
}

void push_queeu(Queeu *queeu, char character) {

    if (is_full(queeu)) {
        puts("overflow");
        return;
    } else {
        queeu->tail = (queeu->tail + 1) % MAX_SIZE;
        queeu->array[queeu->tail] = character;
        queeu->elements++;
    }


}


//char pop_queeu(Queeu *queeu) {
//    if (!is_empty(queeu)) {
//       queeu-> head = (queeu->head + 1) % MAX_SIZE;
//       queeu->elements--;
//       return queeu->array[queeu->head];
//    } else {
//        puts("underflow");
//        exit(1);
//    }
//}




