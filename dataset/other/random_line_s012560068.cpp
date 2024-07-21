      dp[S][i] = min(dp[S][i], dp[S|(1 << j)][j] + cost[i][j]);
