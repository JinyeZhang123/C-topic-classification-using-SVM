            if(s[i-1]==t[j-1]) (dp[i][j] += dp[i-1][j-1] + 1)%=mod;
