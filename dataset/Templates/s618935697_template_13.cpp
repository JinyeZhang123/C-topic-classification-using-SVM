template <class T>
struct fenwick_tree {
    /**********************/
    // ????£???????
    /**********************/
    T T0 = 0;
    T op(T a, T b) { return a + b; }