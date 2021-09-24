#include <stdio.h>
#include "cola.h"

int main(){

    Queeu queeu;
    create_queeu(&queeu);
    push(&queeu, 'A');
    push(&queeu, 'B');
    push(&queeu, 'C');
    push(&queeu, 'D');
    push(&queeu, 'E');
    push(&queeu, 'F');
    pop(&queeu);
    printf("%c", pop(&queeu));




    return 0;
}