bool createNodeAtTheEnd(Node * head, int data) {
  /**
   * Create the new Node
   * Set the value and the next pointer to NULL
   */
  Node * newNode = (Node *) malloc(sizeof(Node));
  newNode->data = data;
  /**
   * Start off with a pointer to keep track of the positioning
   * from the head
   */
  Node * pointer = head;
  /**
   * Iterate till you find the end Node
   */
  while (pointer->next != NULL){

    pointer = pointer->next;
  }
  /**
   * Update the list
   */
  pointer->next = newNode;
  free(pointer);
  return true;
}
