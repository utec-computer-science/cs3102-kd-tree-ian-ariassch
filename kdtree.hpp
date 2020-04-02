#include "kdtree.h"

using namespace std;

template <class T>
bool KDTree<T>::Insert(T x, T y)
{
  auto tempNode = new Node(x,y);

  if(!root)
  {
    root = tempNode;
    delete tempNode;
  }
}
