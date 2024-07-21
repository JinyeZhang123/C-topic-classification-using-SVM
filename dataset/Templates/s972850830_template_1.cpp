template<class Abel> struct UnionFind{
 vector<ll>par;
 vector<ll>rank;
 vector<Abel>diff_weight;
 UnionFind(ll n=1,Abel SUM_UNITY=0) {
  init(n,SUM_UNITY);
  }