#ifndef LIKED_LIST
#define LIKED_LIST


typedef int DATA_TYPE;

typedef struct List{
    DATA_TYPE data;
    struct List *next;
}Node;

void createList(Node **list);

int list_isEmpty(Node *list);

Node *createNode(DATA_TYPE data);

void add_node(Node **list, DATA_TYPE data);
void show_list(Node *list);
int length(Node *list);
#endif 

