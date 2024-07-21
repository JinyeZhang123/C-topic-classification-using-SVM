			for (int t=1;t<i;t++) dp[i][j]=(dp[i][j]+dp[i-t][j]*c[i-2][t-1]%m*s[t][j+1]%m)%m;
