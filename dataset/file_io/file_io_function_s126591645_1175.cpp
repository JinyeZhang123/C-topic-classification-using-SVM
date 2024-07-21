int main(void) {
	ios::sync_with_stdio(0); cin.tie(0);
#ifdef _DEBUG
	ifstream cin("1.in");
#endif
	ui n, m; cin >> n >> m;
	
	for (ui i = 0; i != n; ++i) cin >> g[i];
	ui sx, sy, tx, ty; s = 200, t = 201;
	eclr();
	for (ui i = 0; i != n; ++i)
		for (ui j = 0; j != m; ++j) {
			if (g[i][j] == 'S') { sx = i; sy = j; }