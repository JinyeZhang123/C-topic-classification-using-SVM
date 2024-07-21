template<typename T>
class LazySegmentTree{
    //[l, r)半開区間を扱う
private:
    std::vector<T> node, lazy;
    std::function<T(T, T)> f; // 取得の演算
    std::function<T(T, T)> g; // 更新の演算
    std::function<T(T, int)> pow; // 更新の演算をk回作用させたときの結果

    T f_ide; //演算fの単位元
    T g_ide; //演算gの単位元

    int size;
public:
    LazySegmentTree(int n, std::function<T(T, T)> f, std::function<T(T, T)> g, T f_ide, T g_ide) : 
    f(f),
    g(g),
    f_ide(f_ide),
    g_ide(g_ide)
    {
        init(n);
        pow = [=](T a, int k){
            T ans = g_ide;
            while(k > 0){
                if(k & 1)ans = g(ans, a);
                a = g(a, a);
                k >>= 1;
            }