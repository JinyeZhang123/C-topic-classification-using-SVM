template <typename T>
struct Graph{
  int n;
  vector<T> d;
  vector<edge<T>> es;
  Graph(int n_){
    n = n_;
    d.resize(n, numeric_limits<T>::max());
  }