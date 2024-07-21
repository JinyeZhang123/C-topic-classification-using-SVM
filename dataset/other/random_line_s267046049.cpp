					dp[i][j][k][l]=dp[i][j][k][l-1]+dp[i+dp[i][j][k][l-1]][j][k][l-1];
