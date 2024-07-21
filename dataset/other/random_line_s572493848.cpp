			dp[i + 1] = (i - cnt[i + 1] >= 0 && S[i - cnt[i + 1]] == 'O' && cnt[i + 1] == dp[i + 1 - cnt[i + 1]]) ? cnt[i + 1] : 0;
