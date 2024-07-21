				dp[i + 1][j] = min({ dp[i + 1][j],dp[i + 1][j - cs[i]] + 1});
