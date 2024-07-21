template <typename F,typename T>
struct DST{
  T identity;
  F merge;
  int size;
  vector<T> dat,delay;
  
  DST(F f,T id):merge(f),identity(id){}