signed main() {
  #ifndef ONLINE_JUDGE
    ifstream cin("in");
  #endif
  ios_base::sync_with_stdio(0); cin.tie(0); // harris leung ioi gold calling it 18.09

  int n; cin >> n;
  ld v[n + 1];
  for (int i = 1; i <= n; i ++) cin >> v[i];
  ld dp1[n + 1][n + 1]; // dp1[i][j] means j heads in first i coins
  memset(dp1, -1, sizeof(dp1));
  dp1[0][0] = 1;
  for (int i = 1; i <= n; i ++) {
    dp1[i][0] = dp1[i - 1][0] * (1 - v[i]);
    dp1[i][i] = dp1[i - 1][i - 1] * v[i];
  }