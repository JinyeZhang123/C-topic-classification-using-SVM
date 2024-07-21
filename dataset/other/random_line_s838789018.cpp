				for(int l=1;l<=n;++l)if((k&(1<<l-1))&&g[l][j])dp[i|k][l]=max(dp[i|k][l],dp[i][j]+w[k]+g[l][j]);
