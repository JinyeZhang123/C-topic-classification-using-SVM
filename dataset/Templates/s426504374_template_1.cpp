template<typename T>
class BinTree {
private:
    struct Node {
        T val;
        Node *parent;
        Node *left;
        Node *right;
    }