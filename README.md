# Generic Linked List Implementation using C

Generic lists implementation has 3 parts
* Generic List
* Generic List Iterator
* Driver program

Generic lists can contain any copyable data and resize dynamically.  
Generic lists maintain data in the form of void*.  
Data should be copyable and addressable value i.e. a lvalue.  
Data returned from Generic list is a void* which has to be converted to original data type.

A generic list iterator is also provided which works as a pointer.
Iterator can be moved only in forward direction.

## Modules
Project has 3 modules
* Driver program, written in main.c
* Generic List, written in glist.c and glist.h
* Generic List Iterator, written in giter.c and giter.h

### GenList
``` c
struct GenList {
    void *data;
    struct GenList *next;
};

typedef struct GenList GenList;
```

### Iter
``` c
struct Iter {
    GenList *gen_list_node;
};

typedef struct Iter Iter;
```

## API supported
### _create generic list_
``` c
GenList* new_genlist();
```
Creates a new generic list object

### _delete generic list_
``` c
void free_genlist(GenList* node);
```
Frees generic list object and all of its contents

### _get value at index_
``` c
void* value_at_genlist(GenList* list, int index);
```
Get value at an index

### _insert value at index_
``` c
void insert_genlist(void* data, signed index);
```
Insert data in generic list. -1 index refers to end.

### _create generic list iterator_
``` c
Iter* new_iter(GenList* list);
```
Create a generic list iterator

### _delete generic list iterator_
``` c
void free_iter (Iter* itr);
```
Remove generic list iterator

### _move generic list iterator forward_
``` c
void next_iter(Iter* itr);
```
Move generic list iterator forward

### _check if generic list iterator points to NULL_
``` c
int is_null_iter(Iter* itr);
```
Check if generic list iterator points to a NULL location

### _get value from generic list iterator_
``` c
void* value_at_iter(Iter* itr);
```
Get value from a generic list iterator
