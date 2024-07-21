template <class T>
struct BIT {
  int treesize;
  vector<T> lst;
  // constructor
  BIT(int newn = 0) : treesize(newn), lst(newn + 1, 0) {}