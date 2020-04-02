#include "kdtree.h"

using namespace std;

template <typename T>
KDTree<T>::KDTree(int k)
{
  this->k = k;
}

template <typename T>
bool KDTree<T>::Insert(T x, T y)
{
  auto tempNode = new Node(x,y);

  if(!root)
  {
    root = tempNode;
    tempNode = NULL;
    delete tempNode;
    cout<<root->x;
  }
}
