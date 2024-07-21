int main() {
#ifdef DEBUG
  ifstream ifs("in.txt");
  cin.rdbuf(ifs.rdbuf());
#endif
  int N;
  while (~scanf("%d", &N)) {
    vector<int> color(N);
    for (auto& x : color) scanf("%d", &x), --x;
    vec<int, 2> G(N);
    for (int i = 0; i < N - 1; i++) {
      int a, b;
      scanf("%d %d", &a, &b);
      --a;
      --b;
      G[a].push_back(b);
      G[b].push_back(a);
    }