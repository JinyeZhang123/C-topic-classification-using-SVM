template<typename T, typename S>
struct LazySegmentTree{
private:
    int n;
    vector<T> node;
    vector<S> lazy;
    T E0;
    S E1;

    inline void updatef(S& lazy,S& value){
        //lazy += value;
        //lazy = max(lazy, value);
        lazy = min(lazy, value);
    }