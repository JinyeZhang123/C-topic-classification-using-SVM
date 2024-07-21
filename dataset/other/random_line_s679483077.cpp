			cur = S(r1, j, r2, j), f[j] = (cur && cur != r2 - r1 + 1 ? j - 1 : cur == la ? f[j + 1] : j);
