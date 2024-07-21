                dp[i] = min(dp[i], dp[mem[Cnt[i] ^ (1LL << j)]] + 1);
