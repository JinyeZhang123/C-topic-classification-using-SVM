			a[i][j] = lcm(lcm(a[i - 1][j],a[i][j - 1]),lcm(a[i][j + 1],a[i + 1][j])) + 1; 
