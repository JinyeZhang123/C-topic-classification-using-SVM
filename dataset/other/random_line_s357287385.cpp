        dphalf[(n+1)%2][i] = (dphalf[n%2][i-A[n]] + dphalf[n%2][i]) % MOD;
