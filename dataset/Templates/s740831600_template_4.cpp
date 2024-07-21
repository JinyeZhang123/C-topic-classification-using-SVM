template<typename T>
class SegTree {
private:
  vector<T> data;
  Monoid<T> monoid;
  int size = 1;

public:
  SegTree(const int &n, const Monoid<T> &m)
    : monoid(m) {
    while (size < n) size *= 2;
    data = vector<T>(2 * size, monoid.id);
  }