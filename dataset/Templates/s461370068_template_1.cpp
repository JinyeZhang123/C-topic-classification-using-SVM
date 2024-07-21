template<typename T>
class RMQ {
    int n;
    vector<T> data;
    const T INIT_VALUE;
    int get(int a, int b, int k, int l, int r){
        if(r <= a || b <= l)return INIT_VALUE;
        if(a <= l && r <= b)return data[k];
        T lv = get(a, b, (k << 1) + 1, l, (l + r) >> 1);
        T rv = get(a, b, (k << 1) + 2, (l + r) >> 1, r);
        return min(lv, rv);
    }