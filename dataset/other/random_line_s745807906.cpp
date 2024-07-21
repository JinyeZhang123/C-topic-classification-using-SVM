		dp[3][i+1] = min(min(dp[0][i],dp[1][i]),min(dp[2][i],dp[3][i])) + (A[i]?A[i]%2:2);
