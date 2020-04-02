#ifndef KDTREE_H
#define KDTREE_H

#include <iostream>

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
   };

   Node* root = NULL;
   int k;

   KDTree(int k);

   bool Insert(T x, T y);
   bool Search(T x, T y);

};
#endif
