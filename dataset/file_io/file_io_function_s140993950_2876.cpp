int main() {
#ifdef INPUT_FROM_FILE
	ifstream cin("sample.in");
	ofstream cout("sample.out");
#endif
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	cout << fixed << setprecision(50);

    size_t n; cin >> n;
    vector<vector<Edge>> g(n);
	REP(i, n) {
		size_t k; cin >> k;
		REP(j, k) {
			size_t c; cin >> c;
			g[i].push_back({ c }