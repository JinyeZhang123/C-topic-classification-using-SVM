template<typename T, typename E> class LazySegmentTree {
public:
  typedef function<T (T, T)> Operator;
  typedef function<E (E, E)> Merge;
  typedef function<T (T, E)> Apply;
  typedef function<E (E, ll)> Product;

  vector<T> data;
  vector<E> lazy;
  ll n;        // size of elements (2^x alignment)
  T e;         // identity of monoid
  Operator op; // binary operator of monoid
  E d;         // identity of effect
  Merge merge; // merge effects
  Apply apply; // apply effect to monoid
  Product p;   // calculate effect * n

  // construction with size of elements
  LazySegmentTree(ll _n, T e, Operator op, E d, Merge merge, Apply apply, Product p):
    e(e), op(op), d(d), merge(merge), apply(apply), p(p) {
    for(n = 1; n < _n; n *= 2);
    data.resize(n * 2 - 1, e);
    lazy.resize(n * 2 - 1, d);
  }