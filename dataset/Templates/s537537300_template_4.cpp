template<typename T>
class SegTree{
    int n;
    vector<T> data;
    T def;
    function<T(T,T)> operation;
    function<T(T,T)> update;

    T _query(int a, int b, int k, int l, int r){
        if(r <= a || b <= l) return def;

        if(a <= l && r <= b) return data[k];
        else{
            T c1 = _query(a, b, 2*k+1, l, (l+r)/2);
            T c2 = _query(a, b, 2*k+2, (l+r)/2, r);
            return operation(c1, c2);
        }