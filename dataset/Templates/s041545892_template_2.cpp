template <class T>
class SegmentTree{
  ll N;
  vector<T> data;
  vector<T> lazy;
  T def;
  function<T(T,T)> operation;
  function<T(T,T)> update;
  public:
  SegmentTree(size_t _N,T _def,function<T(T,T)> _operaition,function<T(T,T)> _update):def(_def),operation(_operaition),update(_update){
          N = 1;
          while(N < _N){
              N *= 2;
          }