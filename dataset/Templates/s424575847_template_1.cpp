template<typename T>
T maxSquare(vector< vector<T> > board) {
	T H = board.size(), W = board[0].size();
	vector< vector<T> > dp(H, vector<T>(W));

	T ret = 0;
	for(int i = 0;i < H;i++)
	{
		for (int j = 0; j < W; j++)
		{
			if (board[i][j] == 1) continue;
			if (i == 0 || j == 0) dp[i][j] = 1;
			else {
				dp[i][j] = min(dp[i - 1][j - 1], min(dp[i][j - 1], dp[i - 1][j])) + 1;
			}