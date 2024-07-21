        Rep(k , 3) s[i][j][k] = s[i - 1][j][k] + s[i][j - 1][k] + (a[i][j] == pat[k]) - s[i - 1][j - 1][k];
