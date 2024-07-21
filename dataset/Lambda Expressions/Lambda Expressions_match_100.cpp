[&](int i, int j) {
        if (i < 0 || j < 0 || i >= 12 || j >= 12) return;
        if (s[i][j] == '0') return;
        s[i][j]  = '0';
        int di[] = {1, 0, -1, 0}