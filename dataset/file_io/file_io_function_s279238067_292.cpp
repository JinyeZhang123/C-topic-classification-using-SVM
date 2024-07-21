void solve() {
#ifdef _WIN32
	istream &cin = ifstream("input.txt");
#endif
	int n;
	cin >> n;
	rep(i, n) {
		vector<int> v1(101), v2(101);
		string s1, s2;
		cin >> s1 >> s2;

		rep(j, s1.size()) v1[j] = s1[s1.size() - j - 1] - '0';
		rep(j, s2.size()) v2[j] = s2[s2.size() - j - 1] - '0';
		
		rep(j, 100) {
			v1[j] += v2[j];
			if (v1[j] >= 10) {
				v1[j] -= 10;
				v1[j + 1]++;
			}