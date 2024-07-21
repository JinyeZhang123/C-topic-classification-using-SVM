            e[i][j] = e[i - 1][j] + e[i][j - 1] - e[i - 1][j - 1] + (mp[i][j] && mp[i - 1][j]) + (mp[i][j] && mp[i][j - 1]);
