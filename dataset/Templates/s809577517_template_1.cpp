template<typename T>
class LazySegmentTree{
    int n;
    std::vector<T> node;
    std::vector<T> lazy;
    std::vector<int> length;
    int height;

    using F = std::function<T(T, T)>;
    using S = std::function<T(T, int)>;

    F f;
    F g;
    F h;
    S s;
    T id1;
    T id2;

    void evaluate(int k){
        if(lazy[k] == id2){
            return;
        }