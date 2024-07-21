	return dp[n][r]=combination(n - 1, r - 1) % 1000000007 + combination(n - 1, r) % 1000000007;}
