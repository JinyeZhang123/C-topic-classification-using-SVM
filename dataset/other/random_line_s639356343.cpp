	return dp[i][hc] = (1-p[i])*solve(i+1, hc) + p[i]*solve(i+1, hc+1);
