template<typename T>
T largestSquare(vector<vector<T>> &dp) {
	T maxv = 0;
	int H = dp.size();
	int W = dp[0].size();
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			if (i && j && dp[i][j]) {
				dp[i][j] = min({dp[i-1][j-1], dp[i][j-1], dp[i-1][j]}