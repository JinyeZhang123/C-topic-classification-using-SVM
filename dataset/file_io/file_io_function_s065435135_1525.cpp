int main() {
#ifdef DEBUG
  ifstream cin("in.txt");
#endif
  int N;
  ll A, B;
  while (cin >> N >> A >> B) {
    vector<ll> S(N);
    for (ll& x : S) cin >> x;
    auto stA = buildSt(S, A);
    auto stB = buildSt(S, B);
    auto enA = buildEn(S, A);
    auto enB = buildEn(S, B);
    vector<ll> dpA(N + 1), dpB(N + 1);
    dpA[N] = dpB[N] = 1;
    vector<ll> sumA(N + 2, 0), sumB(N + 2, 0);
    sumA[N] = sumB[N] = 1;
    for (int i = N - 1; i >= 0; i--) {
      //ll vA = 0;
      //for (int x = (i > 0 ? stB[i - 1] : 0); x <= enA[i]; x++) (vA += dpB[x]) %= MOD;
      //ll vB = 0;
      //for (int x = (i > 0 ? stA[i - 1] : 0); x <= enB[i]; x++) (vB += dpA[x]) %= MOD;
      int a0 = max(i > 0 ? stB[i - 1] : 0, i + 1), a1 = enA[i];
      int b0 = max(i > 0 ? stA[i - 1] : 0, i + 1), b1 = enB[i];
      if (a1 >= a0) dpA[i] = (sumB[a0] - sumB[a1 + 1] + MOD) % MOD;
      if (b1 >= b0) dpB[i] = (sumA[b0] - sumA[b1 + 1] + MOD) % MOD;
      sumA[i] = (sumA[i + 1] + dpA[i]) % MOD;
      sumB[i] = (sumB[i + 1] + dpB[i]) % MOD;
    }