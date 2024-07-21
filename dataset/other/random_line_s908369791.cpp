            if(s[i]==s[j]) dp[i][j] = min(dp[i+1][j+1]+1,abs(i-j));
