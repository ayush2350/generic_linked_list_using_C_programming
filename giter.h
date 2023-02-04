#ifndef GITER_H
#define GITER_H
#include "glist.h"

struct Iter {
    GenList *gen_list_node;
};

typedef struct Iter Iter;

Iter* new_iter(GenList* list);
void next_iter(Iter* itr);
int is_null_iter(Iter* itr);
void* value_at_iter(Iter* itr);
void free_iter (Iter* itr);

#endif