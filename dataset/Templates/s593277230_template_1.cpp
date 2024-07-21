template <typename T, typename E = T>
class LazySegmentTree
{
public:
    LazySegmentTree(int n, const T &tunit, const E &eunit) : _tunit(tunit), _eunit(eunit)
    {
        _n = 1 << __lg(2 * n - 1);
        _data.resize(2 * _n - 1, tunit);
        _lazy.resize(2 * _n - 1, eunit);
    }