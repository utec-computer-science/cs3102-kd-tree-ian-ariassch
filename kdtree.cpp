#include "kdtree.h"

using namespace std;

template <typename T>
KDTree<T>::KDTree(int _k)
{
  k = _k;
  root = NULL;
}

template <typename T>
bool KDTree<T>::Insert(T x, T y)
{
  auto tempNode = new Node(x,y);

  if(!root)
  {
    root = tempNode;
    root->level = 1;
    tempNode = NULL;
    delete tempNode;
  }
  else
  {
    Insert(tempNode, root);
  }
}

template <typename T>
bool KDTree<T>::Insert(Node* nodo, Node* ptr)
{
  nodo->level = ptr->level+1;
  if(ptr->level % k == 1)
  {
    if(nodo->x < ptr->x)
    {
      if(!ptr->left)
      {
        ptr->left = nodo;
      }
      else
      {
        Insert(nodo, ptr->left);
      }
    }
    else
    {
      if(!ptr->right)
      {
        ptr->right = nodo;
      }
      else
      {
        Insert(nodo, ptr->right);
      }
    }

  }
  else if(ptr->level % k == 0)
  {
    if(nodo->y < ptr->y)
    {
      if(!ptr->left)
      {
        ptr->left = nodo;
      }
      else
      {
        Insert(nodo, ptr->left);
      }
    }
    else
    {
      if(!ptr->right)
      {
        ptr->right = nodo;
      }
      else
      {
        Insert(nodo, ptr->right);
      }
    }
      nodo->level = ptr->level+1;
  }
}

template <typename T>
void KDTree<T>::printaux(Node *root, int indent)
{

    if (root == NULL)
        return;
    indent += 11;
    printaux(root->right, indent);
    cout<<endl;
    for (int i = 11; i < indent; i++)
        cout<<" ";
    cout<<root<<"\n";

    printaux(root->left, indent);
}

template <typename T>
void KDTree<T>::print()
{
  printaux(root, 0);
}
