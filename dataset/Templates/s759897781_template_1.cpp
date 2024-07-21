template<class T> class SegTree   // 0-indexed
{
private:
    int n;             // 葉の数
    vector<T> data;    // ノードの値を持つ配列
    vector<T> lazy;    // 遅延評価を持つ配列
    vector<bool> lazyflag;   // 遅延評価を行うべきかどうか

    T def;                // 初期値かつ単位元
    
    T operation(T a, T b)    // 区間クエリで使う処理
    {
        return min(a, b);   // 区間minクエリ
        //return a+b;           // 区間和クエリ
    }