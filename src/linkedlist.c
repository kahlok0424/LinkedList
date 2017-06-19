#include "stdio.h"
#include "linkedlist.h"

void listInit(LinkedList *link){
    link->head = NULL;
    link->tail = NULL;
    link->len = 0;
}

void ListAdd(LinkedList *link ,Item *item){
    link->head = item;
    link->tail = item;
    link->len = 1;
    item->next = NULL;
    
}