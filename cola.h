#ifndef TAREAS_COLA_H
#define TAREAS_COLA_H

#define MAX_SIZE 8

typedef struct{
    int size;
    char array[MAX_SIZE];
}Queeu;

static void delete(Queeu *queeu);

void create_queeu(Queeu *queeu);
int is_empty(Queeu *queeu);
int is_full(Queeu *queeu);
void push(Queeu *queeu, char character);
char pop(Queeu *queeu);


#endif
