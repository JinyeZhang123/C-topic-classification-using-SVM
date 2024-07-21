				if(j >= f[v][k]) dp[i][j] = min(dp[i][j], dp[i - 1][j - f[v][k]] + a[v]);
