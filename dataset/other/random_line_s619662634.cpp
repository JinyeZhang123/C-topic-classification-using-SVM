                dp[i][j][k] = (n/kk) + (1/kk) * ((i ? i*dp[i-1][j][k] : 0) + (j ? j*dp[i+1][j-1][k] : 0) + (k ? k*dp[i][j+1][k-1] : 0));
