int main() {

	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	#ifdef LOCAL
	ifstream cin("sample.in");
	#endif

	string S; cin >> S; reverse(all(S));
	for (char c : S) N.push_back(c - '0');

	int dw = 0, up = sz(S);
	while (up - dw > 1) {
		int md = (dw + up) >> 1;
		if (IsVal(md)) up = md;
		else dw = md;
	}