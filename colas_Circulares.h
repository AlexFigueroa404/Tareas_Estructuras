#ifndef TAREAS_COLAS_CIRCULARES_H
#define TAREAS_COLAS_CIRCULARES_H

#define MAX_SIZE 4
typedef struct{
    char array[MAX_SIZE];
    int head;
    int tail;
    int elements;
}Queeu;

void create_queeu(Queeu *queeu);
int is_full(Queeu *queeu);
int is_empty(Queeu *queeu);
void push_queeu(Queeu *queeu, char);
char pop_queeu(Queeu *queeu);

//char get_head(Queeu *queeu);


#endif
