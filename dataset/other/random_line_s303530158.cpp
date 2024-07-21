				dp[m|v][i] = max(dp[m|v][i], dp[m][i] + V[v | (1 << i)]);
