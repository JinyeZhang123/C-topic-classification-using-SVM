template <class Monoid>
struct SegTree {
  using Func = function<Monoid(Monoid, Monoid)>;
  const Func F;
  const Monoid UNITY;
  int SIZE_R;
  vector<Monoid> dat;

  SegTree(int n, const Func f, const Monoid &unity) : F(f), UNITY(unity) {
    init(n);
  }