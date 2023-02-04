#ifndef GLIST_H
#define GLIST_H

struct GenList {
    void *data;
    struct GenList *next;
};

typedef struct GenList GenList;

GenList* new_genlist();
int size_genlist(GenList* node);
void insert_genlist(void* data, signed index);
void free_genlist(GenList* node);
void* value_at_genlist(GenList* list, int index);

#endif