                cnt[i][j] = (cnt[i-1][j]%e+cnt[i][j-1]%e-cnt[i-1][j-1]%e)%e;
