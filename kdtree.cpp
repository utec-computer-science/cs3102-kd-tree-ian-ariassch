#include "kdtree.h"

using namespace std;

template <typename T>
KDTree<T>::KDTree(int k)
{
  this->k = k;
  root->level = 1;
}

template <typename T>
bool KDTree<T>::Insert(T x, T y)
{
  auto tempNode = new Node(x,y);
  Node *ptr(0,0);

  if(!root)
  {
    root = tempNode;
    tempNode = NULL;
    delete tempNode;
    cout<<root->x;
  }
  else
  {
    ptr = root;
    if(ptr->level % k == 1)
    {
      if(tempNode->x < ptr->x)
      {
        if(ptr->left)
        {
          ptr = ptr->left
        };
        ptr->left = tempNode;
      }
      else if(tempNode->x > ptr->x && !ptr->right)
      {
        ptr->right = tempNode;
      }
        tempNode->level = ptr->level+1;
    }
    else if(ptr->level % k == 0)
    {
      if(tempNode->y < ptr->y)
      {
        ptr->left = tempNode;
      }
      else
      {
        ptr->right = tempNode;
      }
        tempNode->level = ptr->level+1;
    }
  }
}
