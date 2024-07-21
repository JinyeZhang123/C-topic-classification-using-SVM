template <class T, T (*op)(T, T), T (*e)()>
struct segtree{
  int n;
  vector<T> dat;
  segtree(int n_) : n(), dat(n_*4, e()){
    int x = 1;
    while(x < n_){
      x *= 2;
    }