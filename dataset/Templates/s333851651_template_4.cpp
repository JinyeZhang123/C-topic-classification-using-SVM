template<typename T>
class LazySegTree {
  public:
    int N;//葉の数
    vector<T> data;//配列
    vector<T> lazy;//遅延評価
    void _add(int a, int b, T x, int k, int l, int r){
        eval(k, l, r);
        if(b <= l || r <= a)return;
        if(a <= l && r <= b){
            lazy[k] += (r - l) * x;
            eval(k, l, r);
        }