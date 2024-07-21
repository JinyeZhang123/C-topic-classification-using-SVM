int main() {
#ifdef INPUT_FROM_FILE
	ifstream cin("sample.in");
	ofstream cout("sample.out");
#endif
	int T;
	cin >> T;
	while (T--) {
		string s, t;
		cin >> s >> t;
		int a = 0, b = 0;
		calc(s, 'm', 1000, a);
		calc(s, 'c', 100, a);		
		calc(s, 'x', 10, a);		
		calc(s, 'i', 1, a);
		calc(t, 'm', 1000, b);
		calc(t, 'c', 100, b);
		calc(t, 'x', 10, b);
		calc(t, 'i', 1, b);
		int c = a + b;
		string res;
		REP(i,4) {
			res = f[i][c % 10] + res;
			c /= 10;
		}