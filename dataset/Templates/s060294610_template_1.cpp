template <class T>
struct DelaySegmentTree{
  using F = function<T(T,T)>;
  F f;
  T inf;
  int n;
  vector<int> node, delay_val, delay_add;
  vector<bool> delayflag;

  DelaySegmentTree(vector<T> v ,T inf, F f) : inf(inf), f(f){
    n = 1; while(n < v.size()) n *= 2;
    node.resize(2*n-1, inf);
    delay_val.resize(2*n-1, inf);
    delay_add.resize(2*n-1, 0);
    delayflag.resize(2*n-1, false);
    for(int i = 0; i < v.size(); i++) node[i+n-1] = v[i];
    for(int i = n-2; i >= 0; i--) node[i] = f(node[2*i+1], node[2*i+2]);
  }