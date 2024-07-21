int main() {

	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	#ifdef LOCAL
	ifstream cin("sample.in");
	#endif

	int n; cin >> n;
	for (int i = 1; i < n; i++) {
		int v, u; cin >> v >> u;
		G[v].push_back(u);
		G[u].push_back(v);
	}