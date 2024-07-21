        return static_cast<T>(facts[p]*  factinv[q] % mod * factinv[p-q] % mod);
