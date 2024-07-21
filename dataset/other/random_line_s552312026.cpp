                    if((ns>>v&1)&&c[u][v])dp[s|ns][v]=max(dp[s|ns][v],dp[s][u]+c[u][v]+cost[ns]);
