#include "kdtree.cpp"

using namespace std;

int main()
{
  KDTree<float> tree(2);
  tree.Insert(1.1,1.2);
  tree.Insert(3.1,1.5);
  tree.Insert(2.5,7.2);
  tree.Insert(13.1,15.3);
  tree.Insert(6.1,12.3);
  tree.Insert(9.6,1.7);
  tree.Insert(2.5,7.8);
  tree.Insert(10.4,19.8);

  tree.print();

}
