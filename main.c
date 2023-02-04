#include <stdio.h>
#include "glist.h"
#include "giter.h"
int main(void){
    GenList *genlist = new_genlist();
    Iter *itr = new_iter(genlist);

    int val1 = 1, val2 = 2, val3 = 3, val4 = 4, val5 = 5;
    char ch1 = 'a', ch2 ='b';

    insert_genlist(&ch2,0);
    insert_genlist(&val1,1);
    insert_genlist(&val2,2);
    insert_genlist(&val3,3);
    insert_genlist(&val4,4);
    insert_genlist(&val5,5);
    insert_genlist(&ch1,6);

    printf("Value at Index 0: %c \n", *(char *)value_at_iter(itr)); //itr = 0
    next_iter(itr); 
    printf("Value at Index 1: %d \n", *(int *)value_at_iter(itr)); //itr =1
    next_iter(itr);
    printf("Value at Index 2: %d \n", *(int *)value_at_iter(itr)); //itr = 2
    next_iter(itr);
    printf("Value at Index 3: %d \n", *(int *)value_at_iter(itr)); //itr = 3
    next_iter(itr); //itr 4
    next_iter(itr); //itr 5
    printf("Value at Index 5: %d \n", *(int *)value_at_iter(itr));
    next_iter(itr);
    printf("Value at Index 6: %c \n", *(char *)value_at_iter(itr)); //itr = 6
    
    insert_genlist(&ch1,-1);
    
    printf("Last Node Data %c",*(char *)value_at_genlist(genlist,7));
   

    free_iter(itr);
    free_genlist(genlist);

    getchar();
    return 0;
}