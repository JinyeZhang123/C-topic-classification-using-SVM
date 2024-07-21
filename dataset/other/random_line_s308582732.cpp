	rep(x,k+1) (ret += dp[k][x] * p[(n-k)*x] %mod) %= mod;
