#include "linked-list.h"

#include <stdlib.h>
#include <stdio.h>


Node* new_list()
{
  Node* newNode = malloc(sizeof(Node));
  newNode->val = '\0';
  newNode->next = NULL;

  return newNode;
}

void delete_list(Node** head)
{
  Node* node = *head;

  while (node != NULL) {
    Node* tmp = node->next;
    free(node);
    node = tmp;
  }

  *head = NULL;
}

Node* insert_after(Node* prev, char newVal)
{
  Node* newNode = NULL;

  newNode = (Node*) malloc(sizeof(Node));
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
