template<typename T>
int diff(vector<T> &a,vector<T> &b) {
	int la = a.size();
	int lb = b.size();
	int inf = numeric_limits<int>::max() - 10;
	vector<vector<int>> dp(la+1,vector<int>(lb+1,inf));
	REP(i,lb+1) dp[0][i] = i;
	REP(i,la+1) dp[i][0] = i;
	REP(i,la) {
		REP(j,lb) {
			if (a[i] == b[j]) dp[i+1][j+1] = dp[i][j];
			dp[i+1][j+1] = min({dp[i+1][j]+1,dp[i][j+1]+1,dp[i][j]+1,dp[i+1][j+1]}