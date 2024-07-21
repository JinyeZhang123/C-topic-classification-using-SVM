int main() {
#ifdef HOME
    ifstream cin("B.in");
    ofstream cout("B.out");
#endif
   	int	t, i;
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

	cin >> t;
	while(t--) {
		int n;
		cin >> n;

		vector<ll> values(n);
		for(i = 0; i < n; i++) {
			cin >> values[i];
		}