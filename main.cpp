#include "kdtree.cpp"

using namespace std;

int main()
{
  KDTree<int> tree(2);
  tree.Insert(3,6);
  tree.Insert(17,15);
  tree.Insert(2,7);
  tree.Insert(13,15);
  tree.Insert(6,12);
  tree.Insert(9,1);
  tree.Insert(2,7);
  tree.Insert(10,19);

  tree.print();

}
