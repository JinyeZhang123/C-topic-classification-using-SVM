template<typename T>
struct BIT{
  int n;
  vector<T> bit[2];
  BIT(int n_=0):n(n_){
    bit[0].resize(n+1,0);
    bit[1].resize(n+1,0);
  }