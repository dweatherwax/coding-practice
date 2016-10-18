
// Linked list node
typedef struct Node {
  char val;
  struct Node* next;
} Node;


// Return a pointer to the first node in a new linked list
Node* ll_create();

// Deallocate an entire list by iterating through its nodes
void ll_clear(Node** l);

// Insert a new node with a given value after the one passed in
Node* ll_insert_after(Node* prev, char newVal);

// Append a new value at the end of the list
Node* ll_append(Node* head, char newVal);

// Return the size of a linked list
unsigned int ll_size(const Node* head);

// Print out all the values in a list
void ll_print(const Node* head);

