    s[x] = max(s[x << 1], s[x << 1 | 1]) + t[x];
