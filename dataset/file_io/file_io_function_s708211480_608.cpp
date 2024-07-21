int32_t main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//ifstream cin("in.txt");
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		g[u].pb(w);
		g[v].pb(w);
	}