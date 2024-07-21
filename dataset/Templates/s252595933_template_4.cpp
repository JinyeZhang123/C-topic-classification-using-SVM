template<typename T>
class SegTree {
private:
  int n;
  vector<T> data;
public:
  SegTree(int m){
    n=1;
    while(n<m) n*=2;
    data = vector<T>(2*n, 0);
  }