signed main() {
  #ifndef ONLINE_JUDGE
    ifstream cin("in");
  #endif
  ios_base::sync_with_stdio(0); cin.tie(0); // harris leung ioi gold calling it 18.09

  const int mod = 1e9 + 7;
  int a, b; cin >> a >> b;
  int grid[a][b]; for (int i = 0; i < a; i ++) for (int j = 0; j < b; j ++) {char x; cin >> x; grid[i][j] = x == '.';}