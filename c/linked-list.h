
// Linked list node
typedef struct Node {
  char val;
  struct Node* next;
} Node;


// Return a pointer to the first node in a new linked list
Node* new_list();

// Deallocate an entire list by iterating through its nodes
void delete_list(Node** l);

// Insert a new node with a given value after the one passed in
Node* insert_after(Node* prev, char newVal);

// Print out all the values in a list
void print_list(const Node* head);

