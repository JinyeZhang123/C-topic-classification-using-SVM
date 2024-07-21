    rep(x, MX)(dp[x] = p[x % s[i]] + p[x] * i) %= mod;
