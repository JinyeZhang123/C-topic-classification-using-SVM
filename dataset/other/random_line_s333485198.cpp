    for (ll i = 1; i <= n; i++) for (ll j = 1; j < i; j++) ans = (ans + dp[j][i]) % MOD;
