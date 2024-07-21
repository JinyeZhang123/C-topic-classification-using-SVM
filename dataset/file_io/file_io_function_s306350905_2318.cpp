int main() {
#ifdef DEBUG
  ifstream ifs("in.txt");
  cin.rdbuf(ifs.rdbuf());
#endif
  int N, Q;
  while (cin >> N >> Q) {
    vec<edge, 2> G(N);
    doubling_lca lca(N);
    for (int i = 0; i < N - 1; i++) {
      int a, b, c, d;
      cin >> a >> b >> c >> d;
      --a;
      --b;
      --c;
      G[a].push_back({b, c, d}