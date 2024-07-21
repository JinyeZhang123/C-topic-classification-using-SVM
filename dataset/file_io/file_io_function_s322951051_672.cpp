int main() {
#ifdef INPUT_FROM_FILE
	ifstream cin("sample.in");
	ofstream cout("sample.out");
#endif
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	cout << fixed << setprecision(50);
	ll n; cin >> n;
	vvl path(n);
	REP(i, n - 1) {
		ll v, w;
		cin >> v >> w;
		v--, w--;
		path[v].push_back(w);
		path[w].push_back(v);
	}