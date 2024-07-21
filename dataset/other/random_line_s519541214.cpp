				dp[i][j][k]=(dp[i][j][k]+s2[j+k-a[i]][j-max(0,a[i]-k)]-s2[j+k-a[i]][j-a[i]-1])%mod;
