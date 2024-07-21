template<class MM>
struct LazySegTree {
  private:
    using DM = typename MM::DataMonoid;
    using OM = typename MM::OperatorMonoid;
    using DT = typename DM::T;
    using OT = typename OM::T;
    const int n, h;
    vector<DT> data;
    vector<OT> lazy; // act

    void propFrom(int i) {
      if(lazy[i] == OM::identity()) return;
      data[i] = MM::act(lazy[i], data[i]);
      if(i < n) {
        lazy[i * 2] = OM::op(lazy[i], lazy[i * 2]);
        lazy[i * 2 + 1] = OM::op(lazy[i], lazy[i * 2 + 1]);
      }