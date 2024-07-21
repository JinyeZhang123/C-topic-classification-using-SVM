template<typename T>
struct lca {
  int n, root, l;
  vector< vector<int> > to;
  vector< vector<T> > co; // co[i][j] .. costs between i - to[i][j]
  vector<int> dep; // depth from root.
  vector<T> costs; // cumulative cost from root.
  vector< vector<int> > par; // par[i][j] .. i's anccestor. The distance from i is 2**j.

  lca(int n) : n(n), to(n), co(n), dep(n), costs(n) {
    l = 0;
    while ((1<<l) < n) { ++l; }