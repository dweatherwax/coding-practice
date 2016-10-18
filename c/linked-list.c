#include "linked-list.h"

#include <stdlib.h>
#include <stdio.h>


Node* ll_create()
{
  Node* newNode = malloc(sizeof(Node));
  newNode->val = '\0';
  newNode->next = NULL;

  return newNode;
}

void ll_clear(Node** head)
{
  Node* node = *head;

  while (node != NULL) {
    Node* tmp = node->next;
    free(node);
    node = tmp;
  }

  *head = NULL;
}

Node* ll_insert_after(Node* prev, char newVal)
{
  Node* newNode = NULL;

  newNode = (Node*) malloc(sizeof(Node));
  newNode->val = newVal;
  
  newNode->next = prev->next;
  prev->next = newNode;

  return newNode;
}

Node* ll_append(Node* head, char newVal)
{
  if (head == NULL) {
    return NULL;
  }

  while (head->next != NULL) {
    head = head->next;
  }

  return ll_insert_after(head, newVal);
}


unsigned int ll_size(const Node* head)
{
  unsigned int len = 0;

  while (head != NULL) {
    len++;
    head = head->next;
  }

  return len;
}

void ll_print(const Node* head)
{
  while (head != NULL) {
    printf("%c ", head->val);
    head = head->next;
  }

  printf("\n");
}
