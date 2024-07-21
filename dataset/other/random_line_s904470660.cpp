				int q = c ^ p; sum[q] = sum[q & q - 1] + e[ctz(q)][s ^ 1 << i];
