template<typename T, typename E, typename F, typename G, typename H, typename R>
struct SegL{
private:
    vector<T> node;
    vector<E> lazy;
    int n;
    T defVal;
    E defOp;
    F f;    // merge elements(T)
    G g;    // update element(T) 
    H h;    // merge operators(E)
    R r;    // operator depends on length

public:
    SegL(int siz, T defVal, E defOp, F f, G g, H h, R r) : defVal(defVal), defOp(defOp), f(f), g(g), h(h), r(r){
        n = 1;
        while(n < siz)  n *= 2;
        node.resize(2*n-1, defVal);
        lazy.resize(2*n-1, defOp);
    }