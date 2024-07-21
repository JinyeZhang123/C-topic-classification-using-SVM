        return dp[m][n] = 1 + solve(s, t, pos, dp, m-1, n-1);
