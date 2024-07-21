 dp[i][mask]=(dp[i][mask]+solve(i-1,mask^(1<<j)))%hell;
