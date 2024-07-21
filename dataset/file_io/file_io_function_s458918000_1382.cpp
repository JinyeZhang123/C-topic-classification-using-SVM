signed main() {
	/*std::ifstream in("rand_0.txt");
	std::cin.rdbuf(in.rdbuf());*/

	cin >> N;
	a.resize(N);
	bool minus = true;
	REP(i, N) {
		cin >> a[i];
		if (a[i] >= 0)minus = false;
	}