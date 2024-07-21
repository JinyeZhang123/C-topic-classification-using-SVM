template <typename T,typename E>
struct LazySegmentTree{
    typedef function<T(T,T)> F;
    typedef function<T(T,E)> G;
    typedef function<E(E,E)> H;
    typedef function<E(E,int)> P;
    int n;
    F f;
    G g;
    H h;
    P p;
    T d1;
    E d0;
    vector<T> val;
    vector<E> lazy;

    LazySegmentTree(vector<T> a, F f_, G g_, H h_, T d1_, E d0_, P p_=[](E a,int b){return a;}