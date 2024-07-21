		int temp = solve(p, begin, i) + solve(p, i, end) + (p[begin] * p[i] * p[end]);
