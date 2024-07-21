template<typename T>
class SegTree{
    size_t n;
    int h;
    const T identity_element = 0;
    vector<T> data;
    vector<T> lazy;
    void apply(size_t i, T v, size_t k){
        data[i] = data[i] + v * k;
        if (i < n) lazy[i] = lazy[i] + v;
    }