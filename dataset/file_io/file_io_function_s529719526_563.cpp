void solve() {
#ifdef _WIN32
	istream &cin = ifstream("input.txt");
#endif

	stack<int> st;
	int x;
	while (cin >> x) {
		if (x == 0) {
			cout << st.top() << endl;
			st.pop();
		}