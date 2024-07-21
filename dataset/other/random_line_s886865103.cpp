					dp[i][k+jmp] = min(dp[i][k+jmp], dp[j][k] + max(H[i] - H[j], 0LL));
