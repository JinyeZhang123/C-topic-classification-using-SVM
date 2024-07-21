ll oula(ll x) { ll res = x;f(i, 2, x / i) { if (x % i == 0) { res = res / i * (i - 1);while (x % i == 0) x /= i; } }if (x > 1) res = res / x * (x - 1);return res; }
