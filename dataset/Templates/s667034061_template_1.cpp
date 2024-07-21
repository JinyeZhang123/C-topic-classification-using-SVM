template <typename T,typename E>
struct LazySegmentTree{
   using F=std::function<T(T,T)>;
   using G=std::function<T(T,E,int,int)>;
   using H=std::function<T(E,E)>;

   int n;
   std::vector<T> dat;
   std::vector<E> laz;
   const F f;
   const G g;
   const H h;
   const T d1;
   const E d0;

   LazySegmentTree(int n_,const F f,const G g,const H h,const T d1,const E d0):f(f),g(g),h(h),d1(d1),d0(d0)
   {
      n=1;
      while(n_>n) n<<=1;
      dat.assign(2*n,d1);
      laz.assign(2*n,d0);
   }