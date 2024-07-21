template <class T, class Comp=less<T>>
struct BinarySearchTree {
    struct Node {
        T value;
        Node *parent, *left, *right;
        Node(T v=T()): value(v), parent(NULL), left(NULL), right(NULL) {}