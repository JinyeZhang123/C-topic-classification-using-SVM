int main() {
#ifdef HOME
    ifstream cin("B.in");
    ofstream cout("B.out");
#endif
   	int	i, n, k;
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n >> k;
    vector<int> arr(n + 1);
    for(i = 1; i <= n; i++) {
    	cin >> arr[i];
    }