#ifndef BST_H
#define BST_H

class BST {

private: 
  struct Node {

    int data;
    Node * left;
    Node * right;
  } * root;
  Node * createNode(int data);
  Node * findNode(Node * cur, int data);
public:

  bool insert(int data);
  bool deleteByValue();
  void preorder();
  void postorder();
  void inorder();
  
};

#endif
