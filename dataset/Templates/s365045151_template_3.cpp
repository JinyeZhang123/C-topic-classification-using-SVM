template<typename T>
struct Monoid {
  T id;
  fn<T(T, T)> op;
  Monoid(T e, fn<T(T, T)> f)
    : id(e), op(f) {
  }