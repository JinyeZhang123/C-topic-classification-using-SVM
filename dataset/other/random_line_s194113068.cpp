                dp[i][j+a[i-1]] = (dp[i][j+a[i-1]]+dp[i-1][j])%MODV;
