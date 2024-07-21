    for(int i = 0; i < N-2; i++) if(S[i] == 'A' || S[i] == '?') ans = (ans + (fac3[Q_head[i]]*dp[i+1] % mod)) % mod;
