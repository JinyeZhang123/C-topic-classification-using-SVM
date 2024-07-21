template<typename T, typename U>
class SegmentTree{
    int n;
    int height;
    vector<T> node;
    vector<U> lazy;
    vector<int> len;

    using F = function<T(T, T)>;
    using G = function<T(T, U)>;
    using H = function<U(U, U)>;
    using S = function<U(U, int)>;

    F f;
    G g;
    H h;
    S s;
    T en;
    U el;

    void evaluate(int k){
        if(lazy[k] == el){
            return;
        }