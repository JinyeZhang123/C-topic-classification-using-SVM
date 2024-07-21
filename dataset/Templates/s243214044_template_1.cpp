template <class T>
struct BIT{
  int n;
  vector<T> bit; //[1,N]

  BIT(int _n){
    n = _n;
    bit.resize(n,0);
  }