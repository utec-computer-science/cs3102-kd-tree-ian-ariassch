#ifndef KDTREE_H
#define KDTREE_H

#include <iostream>
#include <stdio.h>

template <typename T>
class KDTree
{
public:
  class Node
  {
    public:
      T x, y;
      int level;
      Node *left, *right;
      Node(T _x, T _y)
      {
        x = _x;
        y = _y;
      }

      friend std::ostream& operator<<(std::ostream& os, Node* nodo)
      {
        if(nodo)
        os << "(" << nodo->x <<","<< nodo->y<<")";
        else{os << "NULL";}
        return os;
      }


   };

   Node* root;
   int k;

   KDTree(int k);

   bool compareNodes(std::pair<T,T> a, Node* b);
   bool Insert(T x, T y);
   bool Insert(Node* nodo, Node* ptr);
   bool Search(std::pair<T,T> x);
   bool Search(std::pair<T,T> x, Node* ptr);
   void print();
   void printaux(Node *root, int space);



};
#endif
