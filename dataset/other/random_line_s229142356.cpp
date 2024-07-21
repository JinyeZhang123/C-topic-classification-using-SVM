        for(int j = 1; j < i; j++) f[i] = max(f[i], f[j] + (f[j] / a[j]) * (a[i] - a[j]));
