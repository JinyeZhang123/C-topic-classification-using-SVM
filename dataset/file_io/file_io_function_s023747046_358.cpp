int main(void) {
	ios::sync_with_stdio(0); cin.tie(0);
#ifdef _DEBUG
	ifstream cin("1.in");
#endif
	ui n; cin >> mx >> my >> n;

	vector<seg> xv;
	ui cnt = 0;
	while (n--) {
		ui x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		ui u = id(x1, y1), v = id(x2, y2);
		if (!~u || !~v) continue;
		if (u > v) swap(u, v);
		xv.push_back({ u, ++cnt, 0 }