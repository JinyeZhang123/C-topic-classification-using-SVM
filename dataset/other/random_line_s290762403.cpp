	for(int i=3; i<=n; i++) s[i] = (2*s[i-1] - s[i-2] + s[i-3] + 1ll*(n-1)*(n-1) + (n-i+1) + MOD) % MOD;
