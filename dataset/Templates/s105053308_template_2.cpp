template <template <class> class Container, class TId>
    LazySegmentTree(const Container<T> &v, const TId &tid, const U &uid, F f, G g, H h)
        : size(calc_size(v.size()))
        , tid(tid)
        , dat(size * 2 - 1, tid)
        , uid(uid)
        , lazy(size * 2 - 1, uid)
        , f(f)
        , g(g)
        , h(h)
    {
        std::copy(v.begin(), v.end(), dat.begin() + size - 1);
        dig(0);
    }