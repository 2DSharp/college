#include <stdio.h>
#include <stdlib.h>

#define false  0
#define true  1

struct Node {
  
  int data;
  struct  Node * next;
};

struct Node * createNode(int data);
struct Node * pushNodeAtTheEnd(struct Node * head, int data);
struct Node * pushNodeAtTheHead(struct Node * head, int data);
void deleteNodeAtTheEnd(struct Node * head);

struct Node * createNode(int data) {

  struct Node * node = (struct Node *) malloc(sizeof(struct Node));
  
  node->data = data;
  node->next = NULL;
  if (node == NULL) {
    printf("Malloc failed, something is seriously wrong!");
  }
  return node;
}

struct Node * pushNodeAtTheEnd(struct Node * head, int data) {

  struct Node * cursor = head;
  
  while (cursor->next != NULL){

    cursor = cursor->next;
  }

  struct Node * newNode = createNode(data);
  cursor->next = newNode;

  return newNode;
}

struct Node * pushNodeAtTheHead(struct Node * head, int data) {

  struct Node * newNode = createNode(data);
  newNode->next = head;
  
  return newNode;
}
void deleteNodeAtTheEnd(struct Node * head) {

  struct Node * prevCursor;
  struct Node * cursor = head;

  while (cursor->next != NULL) {

    prevCursor = cursor;
    cursor = cursor->next;
  }
  
  prevCursor->next = NULL;
}
void iterateThroughLinkedList(struct Node * head) {

  struct Node * cursor = head;
  
  while(cursor != NULL) {

    printf("[ %d ] ", cursor->data);
    cursor = cursor->next;

  }
  printf("\n");

}

struct Node * deleteNodeAtTheHead(struct Node * head) {

  struct Node * newHead  = head->next;
  free(head);
  return newHead;
}

int deleteNodeAt(int pos, struct Node * head) {

  if (pos == 0){

    return false;
  }
  
  struct Node * cursor = head;
  struct Node * prevCursor;

  for (int i = 1; i <= pos; i++) {

    prevCursor = cursor;
    cursor = cursor->next;
  }

  prevCursor->next = cursor->next;
  return true;
}
struct Node * pushNodeAt(int pos, struct Node * head, int data) {

  if(pos == 0) {
    return pushNodeAtTheHead(head, data);
  }

  struct Node * cursor = head;
  struct Node * prevCursor = NULL;
  
  for (int i = 1; i <= pos; i++) {

    if (cursor == NULL) {

      printf("List ended, creating node at the end.\n");
      
      return pushNodeAtTheEnd(head, data);
    }
    prevCursor = cursor;
    cursor = cursor->next;
  }
  struct Node * newNode = createNode(data);
  newNode->next = cursor;
  prevCursor->next = newNode;
  
  return newNode;
}

int main() {

  struct Node * head = createNode(1);

  struct Node * n1 = pushNodeAtTheEnd(head, 20);

  iterateThroughLinkedList(head);

  struct Node * n2 =pushNodeAtTheEnd(head, 32);
  iterateThroughLinkedList(head);

  head = pushNodeAtTheHead(head, 34);
  iterateThroughLinkedList(head);

  deleteNodeAtTheEnd(head);
  iterateThroughLinkedList(head);

  struct Node * n3 = pushNodeAtTheEnd(head, 312);
  iterateThroughLinkedList(head);

  head = deleteNodeAtTheHead(head);
  iterateThroughLinkedList(head);

  struct Node * n4 = pushNodeAt(2, head, 100);
  iterateThroughLinkedList(head);

  deleteNodeAt(2, head);
  iterateThroughLinkedList(head);

  free(head);
  free(n1);
  free(n2);
  free(n3);
  free(n4);
}
