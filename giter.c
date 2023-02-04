#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "giter.h"

Iter* new_iter(GenList* list){
    Iter* itr = (Iter*)malloc(sizeof(Iter));
    itr -> gen_list_node = list;
    return itr;
};

void next_iter(Iter* itr){
    GenList *temp;
    temp = itr -> gen_list_node;
    if ((temp -> next)!= NULL) itr -> gen_list_node = temp -> next;
    else printf("No next element present!");
};

int is_null_iter(Iter* itr){
    int isNULL;
    GenList *temp;
    temp = itr -> gen_list_node;
    if((temp -> data)==NULL) isNULL = 1;
    else isNULL = 0;
};

void* value_at_iter(Iter* itr){
    GenList *temp = itr -> gen_list_node;
    return temp -> data;
};

void free_iter (Iter* itr){
    itr -> gen_list_node = NULL;
    free(itr);
};