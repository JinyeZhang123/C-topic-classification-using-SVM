template<typename T>
struct LazySegmentTree{
private:
    int n;
    vector<T> node,lazy;
    T E0,E1;

    inline void updatef(T& lazy,T& value){
        //lazy += value;
        lazy = value;
        //lazy = max(lazy, value);
        //lazy = min(lazy, value);
    }