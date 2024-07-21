		dp[i][j][t] = dp[i-1][j][t] + dp[i][j-1][t] - dp[i-1][j-1][t] + (comp(field[i-1][j-1]) == t);
