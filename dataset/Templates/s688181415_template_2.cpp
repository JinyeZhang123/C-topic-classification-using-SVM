template< typename T >
T kruskal(Edges< T > &edges, int V) {
  sort(begin(edges), end(edges), [](const edge< T > &a, const edge< T > &b) {
    return (a.cost < b.cost);
  }