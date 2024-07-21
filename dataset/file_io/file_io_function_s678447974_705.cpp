signed main() {
  #ifndef ONLINE_JUDGE
    ifstream cin("in");
  #endif
  ios_base::sync_with_stdio(0); cin.tie(0); // harris leung ioi gold calling it 18.09

  cin >> n >> k;
  for (int i = 0; i < n; i ++) {
    int l; cin >> l; v.push_back(l);
  }