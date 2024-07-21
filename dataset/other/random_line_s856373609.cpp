        CNTS[i][j] = min(CNTS[i][j-COINS[i]] + 1, CNTS[i-1][j]);
