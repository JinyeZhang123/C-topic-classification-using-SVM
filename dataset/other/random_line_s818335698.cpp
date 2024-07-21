        dp[i][j] = p[i-1]*dp[i-1][j-1] + (1-p[i-1])*dp[i-1][j];
