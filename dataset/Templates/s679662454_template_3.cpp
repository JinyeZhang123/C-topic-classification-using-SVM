template<class T>
class SegmentTreeLazy {
private:
    const int n, h;
    const T init_dat, init_lazy;
    vector<T> dat, lazy;

    void calc(int p, int k)
    {
        if (lazy[p] == init_lazy) dat[p] = min(dat[p<<1], dat[p<<1|1]);
        else dat[p] = lazy[p];
    }