	for (register int i = 2; i <= n; i++) inv[i] = (mod-(long long)mod/i*inv[mod%i]%mod)%mod;
