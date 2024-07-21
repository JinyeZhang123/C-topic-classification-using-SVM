template <typename T>
struct SegmentTree{
  const T e_T= 0;
  T op(const T &a, const T &b) const{
    return max(a, b);
  }