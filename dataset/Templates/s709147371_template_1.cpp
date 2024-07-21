template <class T>
struct Node {
    T value;
    size_t parent, left, right;
    Node(): value(), parent(-1), left(-1), right(-1) {}