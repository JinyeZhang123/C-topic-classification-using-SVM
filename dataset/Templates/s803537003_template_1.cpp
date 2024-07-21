template<typename E> struct SegTree{
    using F=function<E(E,E)>;
    F f;//binary operation
    E Ei;//identity element
    int C=1;//capacity
    vector<E> D;
    SegTree(F f, E Ei): f(f),Ei(Ei) {}