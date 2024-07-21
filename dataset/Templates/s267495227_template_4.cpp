template<typename X> struct SegTree{
    using FX = function<X(X,X)>; // X•X -> X となる関数の型
    int N = 1;       // 葉の数
    FX fx;
    const X EX;
    vector<X> value; // ノードの値を持つ配列
    SegTree(vector<X> v, FX fx_, X EX_):fx(fx_), EX(EX_){
        int size = v.size();
        while (N < size) N *= 2;
        value = vector<X>(2 * N - 1, EX); //完全2分木のノードの個数は2n-1 余計なところをEXで初期化

        //セグ木を最下段から構成
        rep(i,size) value[i+N-1] = v[i];
        for(int i=N-2;i>=0;i--)value[i] = fx(value[2*i+1], value[2*i+2]);
    }