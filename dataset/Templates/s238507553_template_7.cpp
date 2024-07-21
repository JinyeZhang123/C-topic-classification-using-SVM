template <typename T>
struct SegmentTree{
    /*
    ~~~~1-indexで実装~~~~
            1
        2       3
      4   5   6    7

    ~~~~親・兄弟・子へのアクセスの仕方~~~~
                i<<1
            i           i^1
    i<<1|0   i<<1|1
    */


    using F = function<T(T,T)>;
    int N;
    F func; //関数(minとか)
    T identity; //単位元
    vector<T> data; //上から添字 2*Nくらいのノード
    SegmentTree(){}