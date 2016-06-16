
typedef struct Node {
  char val;
  struct Node* next;
} Node;




Node* new_list();
void insert_after(Node* prev, char newVal);

