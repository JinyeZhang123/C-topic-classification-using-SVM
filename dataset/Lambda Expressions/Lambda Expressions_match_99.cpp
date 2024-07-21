[&](int i, int j) {
        if (i < 0 || j < 0 || i >= 12 || j >= 12 || s[i][j] == '0') return;
        s[i][j] = '0';
        rep(k, 4) dfs(i + di[k], j + dj[k]);
      }