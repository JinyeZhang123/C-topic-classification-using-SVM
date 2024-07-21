int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fastio
	//ifstream cin (".in");
	//ofstream cout (".out");
	//int t;
	//cin >> t;
	//while(t--){
	int n;
	cin >> n;
	std::vector<int> p(n);
	for(int i=0; i<n; i++)cin >> p[i];
	int ans =inf;
	for(int i=1; i<100; i++){
		int sum = 0;
		for(int j=0; j<n; j++){
			sum+=(p[j]-i)*(p[j]-i);
		}