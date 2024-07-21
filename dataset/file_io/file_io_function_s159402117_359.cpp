int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fastio
	//ifstream cin (".in");
	//ofstream cout (".out");
    int A, B, C;
	cin >> A >> B >> C;
	int it = 0;
	while (A%2==0 && B%2==0 && C%2==0) {
		int a = A/2, b = B/2, c = C/2;
		A = b+c;
		B = a+c;
		C = a+b;
		++it;
		if (it > 1000000) {
			cout << -1 << endl;
			return 0;
		}