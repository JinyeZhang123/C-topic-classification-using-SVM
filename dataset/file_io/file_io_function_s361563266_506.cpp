int main(void) {
	ios::sync_with_stdio(0); cin.tie(0);
#ifdef _DEBUG
	ifstream cin("1.in");
#endif
	ui n; cin >> n;
	ul ans = 0;
	for (ui i = 1; i <= n; ++i) cin >> ps[i].x >> ps[i].y;
	iota(p, p + n, 1);
	vector<edge> ev;

	sort(p, p + n, [](ui i1, ui i2) { return ps[i1].x < ps[i2].x; }