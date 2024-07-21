template<class Monoid>
struct SegTree {
  using Func = function<Monoid(Monoid, Monoid)>;
  const int sz;
  const Func fn;
  const Monoid unity;
  vector<Monoid> dat;

  SegTree(int n, const Monoid &u, Func f)
    : sz(1 << (__lg(n+5) + 1)), fn(f), unity(u), dat(sz*2, unity) {}