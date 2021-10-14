#ifndef TAREAS_ESTRUCTURAS_STACK_LINKED_LIST_H
#define TAREAS_ESTRUCTURAS_STACK_LINKED_LIST_H


typedef int tipo_dato;

typedef struct nodo{
    tipo_dato dato;
    struct nodo *siguiente;
}Nodo;

typedef Nodo Pila;

void crear_Pila(Pila **pila);
int pila_vacia(Pila *pila);

void agregar(Pila **pila, tipo_dato data);
void eliminar_cima(Pila **pila);
int cima(Pila *pila);
void display(Pila *pila);

#endif //TAREAS_ESTRUCTURAS_STACK_LINKED_LIST_H
