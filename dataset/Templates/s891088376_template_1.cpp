template<class T, class E, typename F, typename G, typename H, typename P>
struct LazySegmentTree {
private :
    int n;
    F f;
    G g;
    H h;
    P p;
    T id1;
    E id0;
    vector<T> node;
    vector<E> lazy;
public :

    LazySegmentTree () { }