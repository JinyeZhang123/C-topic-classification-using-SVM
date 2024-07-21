template<class T> struct segtree_Point_Minval{
  int N;
  int logN;
  T*mn;
  void malloc(int maxN, int once = 0){
    int i;
    for(i=1;i<maxN;i*=2){
      ;
    }