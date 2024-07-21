int main() {
#ifdef HOME
    ifstream cin("B.in");
    ofstream cout("B.out");
#endif
    int i, n;
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

  	cin >> n;
  	for(i = 1; i < n; i++) {
  		int a, b, c; cin >> a >> b >> c;
  		g[a].push_back({b, c}