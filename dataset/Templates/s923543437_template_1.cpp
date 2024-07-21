template <typename T,typename E>
struct LazySegmentTree{
private:
    typedef std::function<T(T,T)> F;
    typedef std::function<T(T,E)> G;
    typedef std::function<E(E,E)> H;
    typedef std::function<E(E,int)> P;
    int n;
    std::vector<T> init;
    F cal;//function for merge
    G upd;//function for update
    H ecal;//function for evaluate
    P rcal;//function for range calculate
    T initv;
    E opinit;
    std::vector<T> node;
    std::vector<E> lazy;
public:
    explicit LazySegmentTree(//配列で初期化する場合
            int sz,
            F cal,
            G upd,
            H ecal,
            P rcal=[](T a,int b){return a;}