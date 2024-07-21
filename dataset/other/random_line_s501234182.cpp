            else dp[i][j]= (mod + dp[i][j-1] + dp[i-1][j] - ((j-v[i]-1 >=0) ? dp[i-1][j-v[i]-1] : 0))%mod;
