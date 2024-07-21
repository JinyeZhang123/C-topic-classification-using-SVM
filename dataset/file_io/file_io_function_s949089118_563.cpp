void solve() {
#ifdef _WIN32
	istream &cin = ifstream("input.txt");
#endif

	vector<pair<double, double>> vertices(4);
	while (cin >> vertices[0].first) {
		cin >> vertices[0].second;
		rep(i, 3) cin >> vertices[i + 1].first >> vertices[i + 1].second;

		bool flag = (isAbove(vertices[0], vertices[1], vertices[2]) == isAbove(vertices[0], vertices[1], vertices[3]));
		flag &= (isAbove(vertices[0], vertices[2], vertices[1]) == isAbove(vertices[0], vertices[2], vertices[3]));
		flag &= (isAbove(vertices[1], vertices[2], vertices[0]) == isAbove(vertices[1], vertices[2], vertices[3]));

		cout << (flag ? "YES" : "NO") << endl;
	}