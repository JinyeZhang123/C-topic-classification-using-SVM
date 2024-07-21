template <class Monoid> class SegmentTree {
    using F = std::function<Monoid(Monoid, Monoid)>;

    private:
      int sz;
      std::vector<Monoid> seg;

      const F f;
      const Monoid M1;

    public:
      SegmentTree(int n, const F f, const Monoid &M1) : f(f), M1(M1) {
        sz = 1;
        while(sz < n) sz *= 2;
        seg.assign(2 * sz, M1);
      }