int C(int x, int y) { if (x < y) return 0; return static_cast<long long> (F[x]) * I[y] % mod * I[x - y] % mod; }
