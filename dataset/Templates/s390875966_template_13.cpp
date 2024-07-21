template< typename Monoid, typename OperatorMonoid = Monoid >
struct LazySegmentTree {
   using F = function< Monoid(Monoid, Monoid) >;
   using G = function< Monoid(Monoid, OperatorMonoid, int) >;
   using H = function< OperatorMonoid(OperatorMonoid, OperatorMonoid) >;

   int sz;
   vector< Monoid > data;
   vector< OperatorMonoid > lazy;
   const F f;
   const G g;
   const H h;
   const Monoid M1;
   const OperatorMonoid OM0;


   LazySegmentTree(int n, const F f, const G g, const H h,
                           const Monoid &M1, const OperatorMonoid OM0)
         : f(f), g(g), h(h), M1(M1), OM0(OM0) {
      sz = 1;
      while(sz < n) sz <<= 1;
      data.assign(2 * sz, M1);
      lazy.assign(2 * sz, OM0);
   }