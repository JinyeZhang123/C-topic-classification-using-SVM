        cnt[i][c] = min(1 + cnt[i][c-C[i]], cnt[i-1][c]);
