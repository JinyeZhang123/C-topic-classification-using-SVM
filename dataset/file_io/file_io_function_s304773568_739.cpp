void solve(){
#ifdef _WIN32
	istream &cin = ifstream("input.txt");
#endif


	cin >> n >> sum;
	rep(i, n) cin >> V[i] >> W[i];
	rep(i, 101) rep(j, 10001) memo[i][j] = -1;
	
	cout << dp(0, sum) << endl;

}