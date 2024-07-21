                dp[i+1][j] = min(dp[i+1][j], dp[i][j] + bit.sum(wpos[N-i]));
