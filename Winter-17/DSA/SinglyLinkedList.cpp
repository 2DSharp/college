#include <iostream>

struct Node {
  
  int data;
  Node * next = NULL;
};

Node * createNode(int data = 0);
Node * pushNodeAtTheEnd(Node * head, int data =0);
Node * pushNodeAtTheHead(Node * head, int data = 0);
void deleteNodeAtTheEnd(Node * head);

Node * createNode(int data) {

  Node * node = (Node *) malloc(sizeof(Node));
  
  node->data = data;
  node->next = NULL;

  return node;
}

Node * pushNodeAtTheEnd(Node * head, int data) {

  Node * pointer = head;
  
  while (pointer->next != NULL){

    pointer = pointer->next;
  }

  Node * newNode = createNode(data);
  pointer->next = newNode;

  return newNode;
}

Node * pushNodeAtTheHead(Node * head, int data) {

  Node * newNode = createNode(data);
  newNode->next = head;
  
  return newNode;
}
void deleteNodeAtTheEnd(Node * head) {

  Node * prevPointer;
  Node * pointer = head;

  while (pointer->next != NULL) {

    prevPointer = pointer;
    pointer = pointer->next;
  }
  
  prevPointer->next = NULL;
}
void iterateThroughLinkedList(Node * head) {

  Node * pointer = head;
  
  while(pointer != NULL) {
    
    std::cout << "[" << pointer->data << "|" << pointer->next << "]";
    pointer = pointer->next;
    if (pointer != NULL) {
      std::cout << "--> ";
    }
  }
  std::cout << std::endl;
  free(pointer);
}

Node * deleteNodeAtTheHead(Node * head) {

  Node * newHead  = head->next;
  free(head);
  return newHead;
}
Node * pushNodeAt(int pos, Node * head, int data = 0) {

  if(pos == 0) {
    return pushNodeAtTheHead(head, data);
  }

  Node * pointer = head;
  Node * prevPointer = NULL;
  
  for (int i = 1; i <= pos; i++) {

    if (pointer == NULL) {

      std::cout << "List ended, creating node at the end.";
      
      return pushNodeAtTheEnd(head, data);
    }
    prevPointer = pointer;
    pointer = pointer->next;
  }
  Node * newNode = createNode(data);
  newNode->next = pointer;
  prevPointer->next = newNode;
  
  return newNode;
}
int main() {
  
  Node * head = createNode(10);
  
  Node * n1 = pushNodeAtTheEnd(head, 20);
  Node * n2 =pushNodeAtTheEnd(head, 32);
  head = pushNodeAtTheHead(head, 34);
  
  deleteNodeAtTheEnd(head);
  
  Node * n3 = pushNodeAtTheEnd(head, 312);
  head = deleteNodeAtTheHead(head);
  Node * n4 = pushNodeAt(4, head, 100);
  iterateThroughLinkedList(head);

  free(head);
  free(n1);
  free(n2);
  free(n3);
  free(n4);
}
