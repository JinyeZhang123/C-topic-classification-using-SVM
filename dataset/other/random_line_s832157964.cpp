    dp[i][0] = dp[i+1][0]+((k&c) ? n-B[i]:B[i])*c;
