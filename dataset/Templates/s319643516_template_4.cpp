template <typename T>
struct Graph_ {
  int n;
  vector<vector<pair<int, T> > > edge;
  vector<T> dis;
  Graph_(int ns) {
    n = ns;
    edge.resize(n);
    dis.resize(n);
  }