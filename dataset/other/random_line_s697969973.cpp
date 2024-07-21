                    dp[i][j]+=dp[t][l]*dp[i-t][j]%mod*ent[t-1][i-2]%mod;
