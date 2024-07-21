				if(k)dp[i+1][j+(i+1)*2][k-1]=(dp[i+1][j+(i+1)*2][k-1]+dp[i][j][k]*k*k%mod)%mod;
