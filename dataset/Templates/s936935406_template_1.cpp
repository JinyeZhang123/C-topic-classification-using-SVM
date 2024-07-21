template< typename T >
struct segment_tree {
  int sz;
  vector<T> seg;
  const function<T(T, T)> o;
  const T id;
  segment_tree(int n, const function<T(T, T)> o, const T &id)
    : o(o)
    , id(id)
  {
    sz = 1;
    while(sz < n) sz <<= 1;
    seg.assign(2 * sz, id);
  }