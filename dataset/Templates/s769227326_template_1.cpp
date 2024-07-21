template <typename T, typename U>
class LazySegmentTree {
 public:
  using Op = std::function<T(T, T)>;
  using Comp = std::function<U(U, U)>;
  using Mapping = std::function<T(T, U)>;

 private:
  std::vector<T> data_;
  std::vector<U> lazy_;
  T e_;
  Op op_;
  U id_;
  Mapping mapping_;
  Comp comp_;
  int size_;

  void Eval(int k) {
    if (k < size_ - 1) {
      lazy_[k * 2 + 1] = comp_(lazy_[k * 2 + 1], lazy_[k]);
      lazy_[k * 2 + 2] = comp_(lazy_[k * 2 + 2], lazy_[k]);
    }