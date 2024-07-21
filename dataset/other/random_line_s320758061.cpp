        for (int j = 1; j <= i; j++) C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % mod;
