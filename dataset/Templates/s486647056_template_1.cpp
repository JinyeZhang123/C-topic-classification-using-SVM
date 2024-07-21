template<typename T>
struct SEGTREE{
    struct node{
        T val; // for adding more stuff
        T lazy;

        node() : val(0), lazy(0) {}