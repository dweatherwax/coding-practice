#include "linked-list.h"

#include <stdio.h>


int main()
{
  Node* newList = NULL;
  Node* tmp = NULL;

  newList = new_list();
  newList->val = 'a';
  print_list(newList);

  tmp = insert_after(newList, 'b');
  tmp = insert_after(tmp, 'c');
  tmp = insert_after(tmp, 'd');
  
  printf("new list contents: ");
  print_list(newList);

  delete_list(&newList);

  printf("list contents after deleting: ");
  print_list(newList);

  return 0;
}
