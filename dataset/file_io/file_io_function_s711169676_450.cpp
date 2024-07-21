int main() {
  #ifndef ONLINE_JUDGE
    ifstream cin("in");
  #endif
  ios_base::sync_with_stdio(0); cin.tie(0); // harris leung ioi gold calling it 18.09

  int n, k; cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; i ++) cin >> v[i];
  vector<int> dp(n, 2147483647);
  dp[0] = 0;
  for (int i = 1; i < n; i ++) {
    for (int j = i - 1; j >= i - k && j >= 0; j --) {
      dp[i] = min(dp[i], dp[j] + abs(v[i] - v[j]));
    }