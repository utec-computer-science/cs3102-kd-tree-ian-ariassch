#include "kdtree.cpp"

using namespace std;

int main()
{
  KDTree<int> tree(2);
  tree.Insert(2,3);
  cout<<tree.root->x<<endl;
}
