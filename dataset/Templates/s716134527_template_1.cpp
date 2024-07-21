template <typename T>
struct RMQ {
  using Index = int;
  using BitIndex = int;

  const std::vector<T>& A;
  const int N, S, L;

  std::vector<int> lg;
  std::vector<BitIndex> small;
  std::vector<std::vector<Index>> large;

  bool f(Index a, Index b) const {
    if (A[a] != A[b]) return A[a] < A[b];
    return a < b;
  }