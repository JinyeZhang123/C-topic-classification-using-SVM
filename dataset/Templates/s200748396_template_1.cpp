template <typename T>
class fenwick {
 public:
  vector<T> fenw;
  int n;
  
  fenwick(int _n) : n(_n) {
    fenw.resize(n);
  }