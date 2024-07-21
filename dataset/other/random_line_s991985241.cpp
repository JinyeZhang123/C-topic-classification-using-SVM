            if(A[i]<=s) dp[i+1][s] += dp[i][s-A[i]];
