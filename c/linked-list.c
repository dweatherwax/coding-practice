#include "linked-list.h"

#include <stdlib.h>
#include <stdio.h>


Node* new_list()
{
  return malloc(sizeof(Node));
}


Node* insert_after(Node* prev, char newVal)
{
  Node* newNode = NULL;

  newNode = malloc(sizeof(Node));
  newNode->val = newVal;
  
  newNode->next = prev->next;
  prev->next = newNode;

  return newNode;
}


void print_list(const Node* head)
{
  while (head != NULL) {
    printf("%c ", head->val);
    head = head->next;
  }

  printf("\n");
}
