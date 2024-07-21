template <typename T>
struct SegmentTree {
  int SEG_LEN = 1;
  std::vector<T> node;
  SegmentTree(int n) {
    while (SEG_LEN < n) { SEG_LEN <<= 1; }