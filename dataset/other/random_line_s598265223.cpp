				if(k == 1) dp[i][j] = min(dp[i][j], dp[i-1][1] + (!a[i] ? 2 : (a[i] % 2))); 
