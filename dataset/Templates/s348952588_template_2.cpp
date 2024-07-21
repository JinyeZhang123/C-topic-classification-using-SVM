template< typename G >
struct DoublingLowestCommonAncestor {
  const int LOG;
  vector< int > dep;
  const G &g;
  vector< vector< int > > table;

  DoublingLowestCommonAncestor(const G &g) : g(g), dep(g.size()), LOG(32 - __builtin_clz(g.size())) {
    table.assign(LOG, vector< int >(g.size(), -1));
  }