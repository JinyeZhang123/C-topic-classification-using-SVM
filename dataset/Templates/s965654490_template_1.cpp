template<typename T, T (*append)(T, T), T empty>
struct Segtree {
  vector<T> dat;
  int n;
  
  Segtree(int n_) {
    n = 1;
    while (n < n_) n *= 2;
    dat.reserve(2 * n - 1);
    for (int i = 0; i < 2 * n - 1; i++) dat[i] = empty;
  }