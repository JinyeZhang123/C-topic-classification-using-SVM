template <class T>
struct prop_segtree {
  int n;
  vector<T> data;
  vector<bool> propFlag;

  prop_segtree(const int s) {
    init(s);
  }