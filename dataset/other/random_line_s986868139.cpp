    for (long long i = 1; i <= n; i ++) perm_arr[i] = (perm_arr[i-1] * ((m-n)+i)) % mod;
