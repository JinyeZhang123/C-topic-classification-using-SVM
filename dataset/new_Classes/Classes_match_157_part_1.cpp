class Solver{
public:
	static void solve() {
		int a, b;
		cin >> a >> b;
		vector<string> res;

		while (a != 0 && b != 0) {
			int cnt = 0;
			for (int i = a; i <= b; i++) {
				if (i % 400 == 0 || 