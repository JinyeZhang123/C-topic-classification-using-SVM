int main() {
	#ifdef INPUT_FROM_FILE
	ifstream cin("sample.in");
	ofstream cout("sample.out");
	#endif
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	cout << fixed << setprecision(50);
	string s;
	ll n; cin >> n >> s;


	vl len_r(n, 0), len_l(n, 0);
	REP(i, n) {
		if (i == 0) len_l[i] = s[i] - '0';
		else {
			if (s[i] == '1') len_l[i] = len_l[i - 1] + 1;
			else len_l[i] = 0;
		}