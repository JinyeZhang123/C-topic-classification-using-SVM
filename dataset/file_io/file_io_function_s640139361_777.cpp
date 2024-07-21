signed main() {
  #ifndef ONLINE_JUDGE
    ifstream cin("in");
  #endif
  ios_base::sync_with_stdio(0); cin.tie(0); // harris leung ioi gold calling it 18.09

  int n, k; cin >> n >> k;
  x = vector<vector<int>>(n, vector<int>(n));
  mtr ans(n, vector<int>(n));
  for (int i = 0; i < n; i ++) {
    ans[i][i] = 1;
    for (int j = 0; j < n; j ++) {
      cin >> x[i][j];
    }