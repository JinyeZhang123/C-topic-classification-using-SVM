template <typename T>
class SegTree{
  static const int MAXN = 100010;
  T INF;
  int n;
  T A[MAXN*4];
  T lazy[MAXN*4];
  public:
  SegTree(int size, T INF): INF(INF){
    n = 1;
    while(n < size){
      n *= 2;
    }