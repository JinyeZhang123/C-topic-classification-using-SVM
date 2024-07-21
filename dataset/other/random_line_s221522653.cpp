				if(G[j][k] > 0) dp[i|(1<<k)][k] = max(dp[i|(1<<k)][k], dp[i][j]+G[j][k]);
