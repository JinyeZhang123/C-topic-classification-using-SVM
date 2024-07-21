int main() {
#ifdef DEBUG
  ifstream ifs("in.txt");
  cin.rdbuf(ifs.rdbuf());
#endif
  int N;
  while (cin >> N) {
    vector<pii> is(N);
    for (auto& x : is) cin >> x.fst >> x.snd;
    sort(is.begin(), is.end());
    vector<int> pre(N);
    pre[0] = is[0].snd;
    for (int i = 1; i < N; i++) pre[i] = min(pre[i - 1], is[i].snd);
    vector<int> suf(N);
    suf[N - 1] = is[N - 1].snd;
    for (int i = N - 2; i >= 0; i--) suf[i] = min(suf[i + 1], is[i].snd);
    int res = 0;
    auto len = [&](int a, int b) {
      return max(0, b - a + 1);
    }