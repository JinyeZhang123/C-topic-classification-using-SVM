template<typename T>
struct BIT {
  int n;
  vector<T> bit[2];
  BIT(int _n) : n(_n+1) {
    rep(i,2) bit[i].assign(n,0);
  }