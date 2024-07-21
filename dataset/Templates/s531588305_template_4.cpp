template<class A, class... B>
void ERR(A x, B... y) {
    _E(x);
    cerr << (sizeof...(y) ? ", " : " ");
    ERR(y...);
}