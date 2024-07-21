void run(){
	//	ifstream cin("in");
	//	ofstream cout( "out" );
		int D,N;cin >> D >> N;
		vector<int> ds(D);
		REP(i,D)cin >> ds[i];

		vector<int> as(N),bs(N),cs(N);
		REP(i,N)cin >> as[i] >> bs[i] >> cs[i];

		vector<vector<int> > dp(D,vector<int>(N,-1));
		REP(i,N){
			if(!IN(as[i],ds[0],bs[i]+1))continue;
			dp[0][i]=0;
		}