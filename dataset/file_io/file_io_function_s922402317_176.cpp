int main() {
#ifdef HOME
    ifstream cin("B.in");
    ofstream cout("B.out");
#endif
   	int	i, j, n;
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n;

    vector<int> p(n * n + 1);
    for(i = 1; i <= n * n; i++) {
    	cin >> p[i];
    }