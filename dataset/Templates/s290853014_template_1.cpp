template <typename T, const int MAX_E2>
struct SegTreeMax {
  int n, e2;
  T nodes[MAX_E2], is[MAX_E2];

  SegTreeMax() {}