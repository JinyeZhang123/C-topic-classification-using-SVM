int main() {
#ifdef INPUT_FROM_FILE
	ifstream cin("sample.in");
	ofstream cout("sample.out");
#endif
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	cout << fixed << setprecision(50);
	ll h, w; cin >> h >> w;
	vector<string> c(h);
	REP(i, h) cin >> c[i];

	ll ans = 0;
	REP(i, w - 1) {
		vvl cost(h * 2, vl(h, 0)); // cost[差][iの地表からの高さ]
		REP(j, h) { // iのほうが高いとき
			FOR(k, j, h) {
				cost[h + j][k] = c[k][i] == c[k - j][i + 1] ? 1 : 0;
				if (k > 0) cost[h + j][k] += cost[h + j][k - 1];
			}