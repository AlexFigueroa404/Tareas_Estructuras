
#include <stdio.h>
#include <stdlib.h>
#include "stack_linked_list.h"

void crear_Pila(Pila **pila){
    *pila = NULL;
}

int pila_vacia(Pila *pila){
   return  pila == NULL;
}

void agregar(Pila **pila, tipo_dato data){
    Nodo *nuevo_nodo = malloc(sizeof(Nodo));
    nuevo_nodo->dato = data;
    nuevo_nodo->siguiente = *pila;
    *pila = nuevo_nodo;
}

void eliminar_cima(Pila **pila){
    Nodo *nuevo_nodo = *pila;
    *pila = nuevo_nodo ->siguiente;
    free(nuevo_nodo);
}

int cima(Pila *pila){
    tipo_dato aux;
    if(pila == NULL){
        puts("no hay datos que mostrar");
        exit(1);
    }
    aux = pila->dato;
    return aux;
}

void display(Pila *pila){
    Nodo *aux = pila;
    if(aux == NULL){
        puts("no hay datos que mostrar");
        return;
    }
    while (aux){
        printf("-> %d",aux->dato);
        aux = aux->siguiente;
    }
}