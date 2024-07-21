void solve() {
#ifdef _WIN32
	istream &cin = ifstream("input.txt");
#endif

	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			cout << i << "x" << j << "=" << i * j << endl;
		}