# Generic Linked List Implementation using C
Generic lists implementation has 3 parts

Generic List
Generic List Iterator
Driver program
Generic lists can contain any copyable data and resize dynamically.
Generic lists maintain data in the form of void*.
Data should be copyable and addressable value i.e. a lvalue.
Data returned from Generic list is a void* which has to be converted to original data type.

A generic list iterator is also provide which work as a pointer. Iterator can be moved only in forward direction.

# Modules

Project has 3 modules

<li> Driver program, written in main.c </li>
Generic List, written in glist.c and glist.h
Generic List Iterator, written in giter.c and giter.h
