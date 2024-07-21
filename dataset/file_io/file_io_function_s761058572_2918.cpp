void solve() {
	//ifstream fin("input.txt");
	//ofstream fout("output.txt");
	int n;
	cin>>n;
	vvi m(n,vi(n));
	rep(i,0,n){
		rep(j,0,n) cin>>m[i][j];
	}