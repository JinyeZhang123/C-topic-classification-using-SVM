int main() {
#ifdef DEBUG
  ifstream cin("in.txt");
#endif
  int N, X;
  while (cin >> N >> X) {
    vector<int> S(N);
    for (int i = 0; i < N; i++) cin >> S[i];
    sort(S.begin(), S.end());
    vector<ll> dp(X + 1, 0);
    for (ll x = 0; x <= X; x++) dp[x] = x;
    for (int i = 0; i < N; i++) {
      int m = S[i];
      vector<ll> ndp(X + 1, 0);
      for (ll x = 0; x <= X; x++) {
        ndp[x] = (dp[x] * i % MOD + dp[x % m]) % MOD;
      }