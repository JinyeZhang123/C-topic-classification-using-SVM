template<typename T>
class SegTree{
    size_t n;
    int h;
    vector<T> data;
    vector<bool> used;
    static T combine(T L, T R){
        return max(L, R);
    }