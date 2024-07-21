    for(int i=2;i<=n;i++) for(int j=1;j<i;j++) dp[i][j] =   dp[i-1][j-1]*p[i] + // if we choose i to be head
