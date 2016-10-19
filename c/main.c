#include <stdio.h>

#include "linked-list.h"
#include "arrays.h"


void linked_list_test()
{
    Node* llHeadPtr = NULL;
    Node* tmp = NULL;

    llHeadPtr = ll_create();
    llHeadPtr->val = 'a';
    ll_print(llHeadPtr);
  
    tmp = ll_insert_after(llHeadPtr, 'b');
    tmp = ll_insert_after(tmp, 'c');
    tmp = ll_insert_after(tmp, 'd');
  
    printf("new list contents: ");
    ll_print(llHeadPtr);

    printf("size of list: %i\n", ll_size(llHeadPtr));

    tmp = ll_append(llHeadPtr, 'e');
    tmp = ll_append(llHeadPtr, 'f');

    printf("new list contents: ");
    ll_print(llHeadPtr);

    printf("size of list: %i\n", ll_size(llHeadPtr));

    ll_remove(llHeadPtr, 'e');

    printf("new list contents: ");
    ll_print(llHeadPtr);

    printf("size of list: %i\n", ll_size(llHeadPtr));

    ll_remove(llHeadPtr, 'f');

    printf("new list contents: ");
    ll_print(llHeadPtr);

    printf("size of list: %i\n", ll_size(llHeadPtr));

    ll_clear(&llHeadPtr);

    printf("list contents after deleting: ");
    ll_print(llHeadPtr);
  
    printf("size of list: %i\n", ll_size(llHeadPtr));
}


void arrays_test()
{

}


int main()
{
    linked_list_test();
    arrays_test();

    return 0;
}
