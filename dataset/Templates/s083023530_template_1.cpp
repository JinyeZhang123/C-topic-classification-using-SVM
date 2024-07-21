template <class T> class BinaryIndexedTree {
  private:
    int n;
    std::vector<T> bit;

  public:
    BinaryIndexedTree(int node) : n(node), bit(node + 1, 0) {}