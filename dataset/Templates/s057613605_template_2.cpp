template <class T>
struct BinarySearchTree {
    vector<Node<T>> nodes;
    size_t root;
    BinarySearchTree(): root(-1) {}