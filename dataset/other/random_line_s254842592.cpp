	dp[k][p]=min(calc(k,p-1),calc(k-1,p-1)+d[k]*c[p]);
