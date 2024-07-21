int main() {
#ifdef DEBUG
  ifstream ifs("in.txt");
  cin.rdbuf(ifs.rdbuf());
#endif
  int N;
  while (cin >> N) {
    vector<P> ps(N);
    for (auto& p : ps) cin >> p.fst >> p.snd;
    double fail = 0, pass = INF;
    for (int t = 0; t < 100; t++) {
      double R = (fail + pass) / 2;
      bool ok = false;
      for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
          ok |= check(ps, ps[i], ps[j], R);
        }