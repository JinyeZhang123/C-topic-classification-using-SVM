            if (j>=2) dp[i+1][j-2][k+j-2]=(dp[i+1][j-2][k+j-2]+((j/2)*(j/2))%mod*dp[i][j][k])%mod;
