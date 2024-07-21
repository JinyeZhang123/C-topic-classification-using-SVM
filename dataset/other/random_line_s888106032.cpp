			if (v[i - 1] >= j) { dp[i & 1][j] = dp[prev][j] % mod; continue; }
