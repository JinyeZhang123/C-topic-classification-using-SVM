int main() {
#ifdef HOME
    ifstream cin("B.in");
    ofstream cout("B.out");
#endif
   	int	i, n, q;
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    cin >> n;
    for(i = 1; i <= n; i++) {
    	cin >> value[i] >> weight[i];
    }