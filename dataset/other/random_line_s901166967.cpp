        if(j >= 1 && k >= j - 1) dp[i][j][k] = Inc(dp[i][j][k], dp[i - 1][j - 1][k - (j - 1)]);
