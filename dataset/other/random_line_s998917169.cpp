			dp[2][i * c + j] = max(max(dp[1][i * c + j + 1] + a[i][j],dp[3][(i + 1) * c + j] + a[i][j]),dp[2][i * c + j + 1]);
