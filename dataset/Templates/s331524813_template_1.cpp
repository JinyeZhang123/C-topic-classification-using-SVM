template <class M, class E, class F = std::function<M(M, M)>, class A = std::function<M(M, E)>, class G = std::function<E(E, E)>>
class LazySegmentTree {
private:
  M* data;
  E* lazy;
  F op;
  G cp;
  A act;
  M e;
  E id;
  int sz;

  void propagate(int index) {
    if (lazy[index] == id) return;
    lazy[index << 1] = cp(lazy[index << 1], lazy[index]);
    lazy[(index << 1) | 1] = cp(lazy[(index << 1) | 1], lazy[index]);
    data[index] = act(data[index], lazy[index]);
    lazy[index] = id;
  }