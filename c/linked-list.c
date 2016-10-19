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


unsigned int ll_remove(Node* head, char val)
{
  unsigned int removed = 0;
  
  while (head != NULL && head->next != NULL) {
    if (head->next->val == val) {
      Node* tmp = head->next;
      head->next = head->next->next;
      free(tmp);

      removed = 1;
      break;
    }

    head = head->next;
  }

  return removed;
}


unsigned int ll_remove_all(Node* head, char val)
{
  unsigned int numRemoved = 0;
  
  while (head != NULL && head->next != NULL) {
    if (head->next->val == val) {
      Node* tmp = head->next;
      head->next = head->next->next;
      free(tmp);

      numRemoved += 1;
    }

    head = head->next;
  }

  return numRemoved;
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
