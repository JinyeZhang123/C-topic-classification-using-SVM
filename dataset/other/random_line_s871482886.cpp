				dp[i][j]=(dp[i][j]+1ll*dp[i][j-l]*sum[l]%mod*C[j-2][l-1])%mod;
