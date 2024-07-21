template <class Mn, class Ef, class Om, class Oe, class Me>
struct LazySegmentTree {
private:

    int size, height;
    vector<Mn> node;
    vector<Ef> lazy;
    const Mn unit_m;
    const Ef unit_e;
    const Om oper_m;
    const Oe oper_e;
    const Me merge;

    void squeeze(const int& idx) {
        for(int i = height; i >= 0; --i)
            propagate(idx >> i, 1 << i);
    }