        c[i] = (((c[i-1] * (n - i + 1)) % m) * inv[i]) % m;
