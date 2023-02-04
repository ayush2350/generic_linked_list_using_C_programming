#include <stdio.h>
#include <stdlib.h>
#include "glist.h"

GenList* head = NULL;

GenList* new_genlist(){
   GenList* link = (GenList*)malloc(sizeof(GenList));
   link -> data=NULL;
   link -> next = head;
   head = link;
   return link;
};

int size_genlist(GenList* node){
    int size=0;

    while(node!=NULL){
        node = node->next;
        size++;
    }
    return size;
};

// if index is -1 that means data is to be inserted at the end
/*if any other index is passed then the loop checks till it 
  finds the node that has the 'next' == NULL (the last node)*/

// I'm creating a link node that will attached to the existing linked_list

void insert_genlist(void* val, signed index){
    GenList *link = (GenList*)malloc(sizeof(GenList));
    link -> next = NULL;
    link -> data = val;
    GenList *temp = head;
    
    //searches for the last node by checking all nodes 1 by 1
    if (index == -1){
        while((temp->next)!= NULL) temp = temp->next;
    }

    else if(index == 0){
        temp -> data = val;
    }

    else {
        // if index is 0 then loop won't execute
        while(--index){
           temp = temp -> next;
        }
    }

    link -> next = temp -> next;
    temp -> next = link;
}; 

void free_genlist(GenList* node){
    GenList* temp;
    while ((head->next)!=NULL){
        temp = head;
        head = head -> next;
        free(temp);
    }
};

void* value_at_genlist(GenList* list, int index){
    GenList* temp = list;

    // case if user wants to extract the data of the last node
    if (index == (-1)){
        while((temp -> next)!= NULL) temp = temp -> next;
    }

    // case for extracting data of anyother node
    else{
        while(--index){
           temp = temp -> next;
        }
    }
    return temp -> data;
}; 
