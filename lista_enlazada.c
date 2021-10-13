#include <stdio.h>
#include <stdlib.h>
#include "lista_enlazada.h"

void createList(Node **list)
{
    *list = NULL;
}

int list_isEmpty(Node *list){
    return list == NULL;
}

Node *createNode(DATA_TYPE data){
    Node *new_node;
    new_node = malloc(sizeof(Node));
    new_node->data = data;
    new_node-> next = NULL;
    return new_node;
}

void add_node(Node **list, DATA_TYPE data){
    Node *new_node = createNode(data);
    new_node->next = *list;
    *list = new_node;
}

void show_list(Node *list){
    Node *aux = list;
    int count = 0;
    while(aux){
        if(count > 0){
            printf(" -> %d", aux->data);
        }else{
            printf("%d", aux->data);
        }
        aux = aux->next;
        count++;
    }
}

int length(Node *list){
    int count = 0;
    Node *aux = list;

    while(aux){
        count++;
        aux = aux->next;
    }

    return count;
}













