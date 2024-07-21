    cout << (1LL * sum[n-2] * (n-1) % mod * (n-1) + 1LL * dp[n-1] * (n-1) % mod + sum[2*n] - sum[n-1] + mod) % mod;
