template<class T> struct SegTree{
  int n;
  vector<T> node;
  T initv;
  
  SegTree(int n_, T initv_){
    n = 1;
    while(n < n_) n *= 2;
    node.resize(n*2-1);
    initv = initv_;
    rep(i, n*2-1) node[i] = initv;
  }