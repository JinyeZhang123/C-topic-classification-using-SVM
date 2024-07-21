					dp[l][i][i+d]=max(dp[l][i][i+d], max(dp[l][i][i+d-1], max(dp[l][i+1][i+d], dp[l][i+1][i+d-1]+2)));
