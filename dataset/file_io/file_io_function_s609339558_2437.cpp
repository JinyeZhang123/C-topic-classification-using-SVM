int main() {
#ifdef DEBUG
  ifstream ifs("in.txt");
  cin.rdbuf(ifs.rdbuf());
#endif
  int N, M;
  while (cin >> N >> M) {
    vec<Edge, 2> G(N);
    for (int i = 0; i < M; i++) {
      int a, b, w;
      cin >> a >> b >> w;
      --a;
      --b;
      G[a].push_back({b, w}