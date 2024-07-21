template<typename T = int> struct SegmentTree{
private:
  // [val, index]
  vector<pair<T, int>> node;
  int n, sz;

public:
  void resize(vector<T>& v){
    sz = v.size();
    n = 1;
    while(n < sz) n*=2;
    node.resize(2*n);
    for(int i=0; i<sz; i++){
      node[i+n] = make_pair(v[i], i);
    }