                    (nxt[j][v + j + j] += 1LL * (j + j + 1) * dp[j][v] % kMod) >= kMod ? nxt[j][v + j + j] -= kMod : 0;
