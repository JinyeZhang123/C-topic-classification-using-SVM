template< typename T >
struct LowLink {
  const WG<T> &g;
  vector< int > used, ord, low;
  vector< int > articulation;
  vector< pair< int, int > > bridge;

  LowLink(const WG<T> &g) : g(g) {}