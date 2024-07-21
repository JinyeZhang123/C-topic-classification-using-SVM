int main() {
#ifdef DEBUG
	ifstream ifs("in.txt");
	cin.rdbuf(ifs.rdbuf());
#endif
	ll N, X;
	cin >> N >> X;
	//vector<tuple<ll, ll, ll> > T;
	vector<ll> Bi;
	vector<ll> Li;
	vector<ll> Ui;
	vector<ll> T_sums;

	ll init_score = 0; // この得点は、最初 Σ -Li Bi になる
	ll sum_bi = 0;
	FOR(i, N) {
		ll b, l, u;
		cin >> b >> l >> u;
		Bi.push_back(b); Li.push_back(l); Ui.push_back(u);
		init_score -= b * l;
		sum_bi += b;

		T_sums.push_back(b * l + (X - b) * u);
	}