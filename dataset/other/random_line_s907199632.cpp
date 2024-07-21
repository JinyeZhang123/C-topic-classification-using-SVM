    for(int j=0;j<S-1;j++)dp[i][j+1]+=dp[i][j],dp[i][j+1]%=MOD;
