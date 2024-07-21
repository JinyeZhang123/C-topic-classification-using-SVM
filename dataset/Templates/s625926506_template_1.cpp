template <typename T> struct Edge {
  int to;
  T cap;
  int rev; // 逆向きの辺のidx
}