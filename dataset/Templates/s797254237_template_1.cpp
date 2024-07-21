template <typename T = lint>
struct SegmentTreeLazy {
  private:
    using F = function<T(T, T)>;
    int n;
    vector<T> node, lazy;
    vector<bool> lazyFlag;
    F func;
    T unit;

  public:
    SegmentTreeLazy(int sz, F func, T unit) : func(func), unit(unit) {
        n = 1;
        while (n < sz)
            n *= 2;
        node.assign(2 * n - 1, unit);
        lazy.assign(2 * n - 1, unit);
        lazyFlag.resize(2 * n - 1, false);
    }