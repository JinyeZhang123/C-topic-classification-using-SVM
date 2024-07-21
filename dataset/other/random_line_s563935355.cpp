            else dp[i][j] = (pre[i-1][i] - pre[i-1][j-1] + 2*P) % P;
