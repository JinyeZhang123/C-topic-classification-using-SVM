	rep(i, 1, 20) for(int j = 1;j + (1 << i) - 1 <= m;++j) bz1[i][j] = get(bz1[i - 1][j], bz1[i - 1][j + (1 << i - 1)]);
