    ld ret = solve(ind + 1, rem - 1) * a[ind] + solve(ind + 1, rem) * (1 - a[ind]);
