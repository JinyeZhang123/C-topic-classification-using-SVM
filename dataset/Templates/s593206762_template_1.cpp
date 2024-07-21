template <typename Monoid >
struct SegmentTree{
  using F = function< Monoid(Monoid,Monoid) >;

  ll sz;
  vector<Monoid> seg;

  const F f;
  const Monoid M;

  SegmentTree(ll n,const F f,const Monoid &M) : f(f),M(M){
    sz = 1;
    while(sz<n) sz<<=1;
    seg.assign(sz*2,M);
  }