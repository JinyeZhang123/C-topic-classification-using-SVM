template<class A, class B>
void _E(pair<A, B> x) {
    cerr << '(';
    _E(x.first);
    cerr << ", ";
    _E(x.second);
    cerr << ")";
}