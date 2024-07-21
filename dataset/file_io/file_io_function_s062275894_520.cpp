void Hoge(){
#ifdef _WIN32
	istream &cin = ifstream("input.txt");
#endif

	int n, sum;

	cin >> sum >> n;
	rep(i, n) cin >> C[i + 1];

	rep(i, n + 1) dp[i][0] = 0;
	rep(i, sum + 1) dp[0][i] = 1 << 20;

	FOR(i,1, n){
		FOR(j, 1, sum){
			
			if (j - C[i] >= 0) dp[i][j] = min(dp[i - 1][j], dp[i][j - C[i]] + 1);
			else dp[i][j] = dp[i - 1][j];
		}