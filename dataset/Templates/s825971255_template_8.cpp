template<class Z>
struct SegTreeLazy {
  using T = Z;
  vector<T> data;
  vector<T> lazy;
  T UNIT;
  int n;
  ll s;
  SegTreeLazy(int n, T a) : n (n),UNIT(a){
    s = 1;
    while(s < n){
      s *= 2;
    }