int main() {
#ifdef _WIN32
	ifstream cin("sample.in");
	ofstream cout("sample.out");
#endif
	cin.tie(0); // cin??¨cout?????£????????????
	ios_base::sync_with_stdio(false);
	cout << fixed << setprecision(50);
	while (true) {
		ll n, m; cin >> n >> m;
		if (n == 0) break;
		const ll MAX = 200000000ll;
		vvl path_l(n, vl(n, MAX));
		vvl path_s(n, vl(n, MAX));
		REP(i, m) {
			ll x, y, t; char sl;
			cin >> x >> y >> t >> sl; x--; y--;
			(sl == 'L' ? path_l : path_s)[x][y] = t;
			(sl == 'L' ? path_l : path_s)[y][x] = t;
		}