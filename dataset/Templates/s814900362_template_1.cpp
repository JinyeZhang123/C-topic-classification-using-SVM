template <typename T>
class SegmentTree {
private:
    int n;    // 配列の要素数
    T init;    // 配列を初期化するときの値
    vector<T> data;     // セグメントツリーを持つ配列
    
public:
    SegmentTree(int m, T init = 0) : n(1), init(init){
        while(n < m) n <<= 1;
        data.assign(2 * n - 1, init);
    }