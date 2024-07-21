    for (int m = l + 1; m < r; m ++) t = min(t, solve(l, m, x, x + y) + solve(m, r, x + y, y) + 1ll * a[m] * (x + y));
