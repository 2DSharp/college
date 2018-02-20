#ifndef BST_FUNCS
#define BST_FUNCS

#include "BST.h"
#include <iostream>

BST::Node * BST::createNode(int data) {

  Node * node = new Node;
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return node;
}
BST::Node * BST::findNode(Node * cur, int data) {

  
  if (data < cur->data) {

    return findNode(cur->left, data);
  }
  if (data > cur->data) {

    return findNode(cur->right, data);
  }
}
bool BST::insert(int data) {

  Node * node = this->createNode(data);
  if (this->root == NULL) {

    this->root = node;
    return true;
  }

  this->findNode(this->root, data);
}

#endif
