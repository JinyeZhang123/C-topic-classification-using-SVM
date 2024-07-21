template <typename T>
class FenwickTree {
 private:
  vector<T> bit;
  int M;

 public:
  FenwickTree(int M) : bit(vector<T>(M + 1, 0)), M(M) {}