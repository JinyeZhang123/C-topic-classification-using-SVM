template<class T> class Segtree_Lazy {
private:
    vector<T> datA, datB;
    int n;
    T INF;
public:
    Segtree_Lazy(int n_) {
      INF = 0; // edit here
      n = 1;
      while (n < n_) n *= 2;
      datA.assign(2 * n - 1, INF);
      datB.assign(2 * n - 1, INF);
    }