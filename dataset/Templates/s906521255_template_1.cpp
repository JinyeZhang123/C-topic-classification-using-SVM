template <class Monoid, class OperatorMonoid = Monoid> class LazySegmentTree {
  using F = std::function<Monoid(Monoid, Monoid)>;
  using G = std::function<Monoid(Monoid, OperatorMonoid, int)>;
  using H = std::function<OperatorMonoid(OperatorMonoid, OperatorMonoid)>;

  private:
    int n;
    std::vector<Monoid> seg;
    std::vector<OperatorMonoid> lazy;

    const F f;
    const G g;
    const H h;
    const Monoid M1;
    const OperatorMonoid OM1;

    void lazyUpdate(int k, int l, int r) {
      if(lazy[k] == OM1) return;

      seg[k] = g(seg[k], lazy[k], r - l);
      if(r - l > 1) {
        lazy[2 * k + 1] = h(lazy[2 * k + 1], lazy[k]);
        lazy[2 * k + 2] = h(lazy[2 * l + 2], lazy[k]);
      }