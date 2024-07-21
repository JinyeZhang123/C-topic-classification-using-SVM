	return dp[x][y][z] = max(solve(x + 1 , y , z) , max(solve(x , y - 1 , z) , z == 0 ? 0 : 2 + solve(x + 1 , y - 1 , z - 1)));
