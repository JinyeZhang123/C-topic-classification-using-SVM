  return dp[a][l]=max({f(a/2,l),f(a,l-1),f(a/2,l-w[a])+v[a]});
