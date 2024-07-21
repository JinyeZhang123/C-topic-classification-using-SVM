template<typename T>
struct BIT_{
  int n;
  vector<T> bit;
  BIT_(int n_){
    n = n_;
    bit = vector<T>(n+1, 0);
  }