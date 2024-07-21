int main() {
#ifdef DEBUG
  ifstream ifs("in.txt");
  cin.rdbuf(ifs.rdbuf());
#endif
  int N, M;
  while (cin >> N >> M) {
    vec<int, 2> G(N);
    for (int i = 0; i < M; i++) {
      int a, b;
      cin >> a >> b;
      --a;
      --b;
      G[a].push_back(b);
    }