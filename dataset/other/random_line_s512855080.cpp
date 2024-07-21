  if(dp[l][r] == INF) for(int i=l; i<r; i++) dp[l][r] = min(dp[l][r], solve(l, i) + solve(i+1, r) + cost[r+1] - cost[l]);
