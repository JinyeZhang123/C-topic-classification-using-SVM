template <typename T>
class FenwickTree
{
public:
  int N;
  vector<T> dat;

  FenwickTree(int n, T m = 0)
  {
    init(n, m);
  }