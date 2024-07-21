template <typename T, typename E> class LazySegmentTree {
  using F = function<T(T, T)>;
  using G = function<T(T, E)>;
  using H = function<E(E, E)>;

private:
  F operation; // 区間に対する処理
  G affecter;  // 作用させる関数
  H merger;    // 作用素をマージ
  T et;        // 単位元
  E ee;
  vector<T> data;
  vector<E> lazy;
  size_t len, height; // 管理している要素数、高さ

  void init(int n_) {
    len = 1;
    height = 0;
    while (len < n_)
      len *= 2, height++;
    data.resize(2 * len, et);
    lazy.resize(2 * len, ee);
  }