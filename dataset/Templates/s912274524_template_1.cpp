template <class T0, class T1>
class LazySegmentTree{
private:
    void eval(int k, int len){
        node[k] = g(node[k], lazy[k]);

        if(len > 1){
            lazy[2 * k + 1] = f1(lazy[2 * k + 1], lazy[k]);
            lazy[2 * k + 2] = f1(lazy[2 * k + 2], lazy[k]);
        }