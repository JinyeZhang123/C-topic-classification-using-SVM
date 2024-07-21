int main() {

	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	#ifdef LOCAL
	ifstream cin("sample.in");
	#endif

	ll a, b; cin >> a >> b;
	int p = MAXN - 1;
	while (p >= 0 && (a >> p) == (b >> p)) p--;
	if (p == -1) die(1);
	ll c = 1LL << p;
	a &= (c << 1) - 1, b &= (c << 1) - 1;
	b = (1LL << (BigPower(b - c) + 1)) - 1;
	if (b < a) cout << (c + b - a + 1) + (c - a) << endl;
	else cout << ((c << 1) - 1) - a + 1 << endl;

	return 0;
}