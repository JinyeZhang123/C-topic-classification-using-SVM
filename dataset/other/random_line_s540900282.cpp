				for(int k=0;k<b;k++)if(d[k]<=c[i+1]&&c[i+1]<=e[k])dp[i+1][f[k]]=max(dp[i+1][f[k]],dp[i][j]+ABS(j-f[k]));
