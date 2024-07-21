template <typename T> class LazySegmentTree{
private:
  int size;
  vector<T> vec;
  function<T(T,T)> f, upd;
  T e;

  void propagate(int i){
    if(i<size/2){
      vec[i*2+1] = f(vec[i], vec[i*2+1]);
      vec[i*2+2] = f(vec[i], vec[i*2+2]);
      vec[i] = e;
    }