template<typename T,typename E>
class LazySegmentTree{
  private:
  int n,n0;
  std::vector<T> dat;
  std::vector<E> lazy;

  T init_t;
  E init_e;

  using F=std::function<T(T,T)>;
  using G=std::function<T(T,E)>;
  using H=std::function<E(E,E)>;
  using P=std::function<E(E,int)>;

  F f;
  G g;
  H h;
  P p;

  T update(int a,int b,T val,int l,int r,int k){
    if(lazy[k]!=init_e){
      if(k<n0-1){
        lazy[2*k+1]=h(lazy[2*k+1],lazy[k]);
        lazy[2*k+2]=h(lazy[2*k+2],lazy[k]);
      }