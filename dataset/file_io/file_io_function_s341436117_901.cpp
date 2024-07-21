signed main() {
  #ifndef ONLINE_JUDGE
    ifstream cin("in");
  #endif
  ios_base::sync_with_stdio(0); cin.tie(0); // harris leung ioi gold calling it 18.09

  string s; cin >> s >> d;
  for (char c : s) v.push_back(c - '0');
  cout << (dp(0, 0, 0) + mod - 1) % mod << endl;
}