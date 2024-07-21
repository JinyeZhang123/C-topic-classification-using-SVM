template <typename T>
class BinarySearchTree
{
private:
  struct Node
  {
    T key;
    Node *right, *left, *parent;
  }