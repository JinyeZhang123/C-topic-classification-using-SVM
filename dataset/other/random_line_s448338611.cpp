                if(dp[j] < dp[j - 1] + C[j - 1]) dp[j] = S[j] + (dp[j - 1] + C[j - 1] + F[j] - 1 - S[j]) / F[j] * F[j];
