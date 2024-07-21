	if (p[l] >= p[r]) return p[l] += p[r], Calc(l, r - 1, l) + (t == r ? x[r] - x[l] : 0);
