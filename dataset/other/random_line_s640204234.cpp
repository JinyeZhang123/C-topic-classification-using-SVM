			for(int k=1;k<=tot[j];k++) (dp[i][j%s[k]]+=dp[i-1][j])%=mod;
