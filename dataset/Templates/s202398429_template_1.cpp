template<typename T = int> struct SegmentTree{

  vector<T> node;
  int N;

  SegmentTree(int n){
    N = 1;
    while(N < n) N*=2;
    node.resize(2*N-1, 0);
  }