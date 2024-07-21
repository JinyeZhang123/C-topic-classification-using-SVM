Poly operator*(const Poly &a, const Poly &b) {
    int n = a.size(), m = b.size();
    Poly ret(n + m - 1);
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) {
        ret[i + j] = (ret[i + j] + a[i] * b[j] % p) % p;
    }