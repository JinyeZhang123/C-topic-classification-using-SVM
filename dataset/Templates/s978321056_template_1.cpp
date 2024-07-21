template<class T>
struct lazy_segment_tree{
  int n;
  vector<T> dat,lazy;
  T de,le;

  T f(T a,T b){
    return min(a,b);
  }