		ans = (ans + 1ll * C(N + M - 2 * i , N - i) * C(2 * i , i) % P * ((P + 1) / 2) % P * poww(C(N + M, N) , P - 2)) % P;
