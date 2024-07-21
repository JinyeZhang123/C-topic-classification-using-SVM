            dp[i][j][2] = max({dp[i][j-1][2], dp[i][j-1][1] + arr[i][j] });
