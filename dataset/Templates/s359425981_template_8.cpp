template <class D, class O>
struct LazySegmentTree {
  using DMerger = function<D(D, D)>;
  using OMerger = function<O(O, O)>;
  using Applier = function<D(D, O, int)>;

  int length;
  D d_unit;
  O o_unit;

  vector<D> seg;
  vector<O> lazy;

  DMerger dm;
  OMerger om;
  Applier app;

  void lazy_evaluate(int k, int len) {
    if (lazy[k] == o_unit) return;
    if (len > 1) {
      lazy[2 * k + 1] = om(lazy[2 * k + 1], lazy[k]);
      lazy[2 * k + 2] = om(lazy[2 * k + 2], lazy[k]);
    }