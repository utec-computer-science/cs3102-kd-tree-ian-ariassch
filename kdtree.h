#include <iostream>

using namespace std;


template <class T>
class KDTree
{
public:
  class Node
  {
    public:
      T x, y;
      Node *left, *right;
      Node(T _x, T _y)
      {
        x = _x;
        y = _y;
      }
   };

   Node* root;

   bool Insert(T x, T y);
   bool Search(T x, T y);

};
