int main() {
#ifdef HOME
	ifstream cin("C.in");
	ofstream cout("C.out");
#endif
	int i, n, t;
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);

	cin >> n >> t;
	vector <pair <int, int>> arr(n + 1);
	for(i = 1; i <= n; i++) {
		cin >> arr[i].a >> arr[i].b;
		arr[i].a++;
	}