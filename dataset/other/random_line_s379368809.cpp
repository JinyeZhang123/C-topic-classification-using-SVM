				dp[i+1][k]=max(dp[i][j]+abs(c[j]-c[k]),dp[i+1][k]);
