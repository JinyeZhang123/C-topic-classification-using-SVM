int main() {
  // ifstream in("NOMURA2020/1.txt");
  // cin.rdbuf(in.rdbuf());

  ll n;
  cin >> n;
  vector<ll> a(n+1);
  rep(i, n+1) cin >> a[i];

  vector<ll> node(n+1);

  node[0] = 1;
  if (a[0] > 1) {
    cout << -1 << endl;
    return 0;
  }