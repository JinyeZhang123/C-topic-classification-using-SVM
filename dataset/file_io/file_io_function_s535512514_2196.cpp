int main() {
#ifdef LOCAL
  ifstream cin("in.txt");
#endif
  int N, Q;
  while (cin >> N >> Q) {
    int M = Q + 2;
    vector<ll> x(M);
    for (int i = 0; i < M; i++) cin >> x[i], --x[i];
    vector<ll> dsum(M);
    dsum[0] = 0;
    for (int i = 1; i < M; i++) {
      dsum[i] = dsum[i - 1] + abs(x[i] - x[i - 1]);
    }