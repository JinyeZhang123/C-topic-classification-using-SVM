int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	fastio
	//ifstream cin (".in");
	//ofstream cout (".out");
    int n;
    cin >> n;
    std::vector<int> a(n);
    for(int i=0; i<n; i++){
    	cin >> a[i];
    }