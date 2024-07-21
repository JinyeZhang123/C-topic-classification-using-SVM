template< typename G >
struct LowLink
{
  const G &g;
  vector< int > used, ord, low, parent;

  LowLink(const G &g) : g(g), used(g.size()), ord(g.size()), low(g.size()), parent(g.size(), -1) {}