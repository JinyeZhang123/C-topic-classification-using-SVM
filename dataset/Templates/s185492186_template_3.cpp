template<class T>
class SegmentTreeLazy {
private:
    const int n, h;
    vector<T> dat, lazy;

    void calc(int p, int k)
    {
        dat[p] = dat[p<<1] + dat[p<<1|1] + lazy[p] * k;
    }