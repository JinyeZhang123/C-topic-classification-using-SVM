int main() {
#ifdef DEBUG
  ifstream cin("in.txt");
#endif
  ll sx, sy, tx, ty;
  int N;
  while (cin >> sx >> sy >> tx >> ty >> N) {
    vector<P> ps(N);
    for (int i = 0; i < N; i++) cin >> ps[i].fst >> ps[i].snd;
    if (sx > tx) {
      for (auto& p : ps) p.fst = L - p.fst;
      sx = L - sx;
      tx = L - tx;
    }