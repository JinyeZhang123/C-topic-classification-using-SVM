				if(j >= a[i]) f[i][j] = (f[i - 1][j - a[i]] + f[i - 1][j]) % MOD;
