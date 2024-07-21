      dp1[j][l] = (2 * dp1[k][l] + (l - x >= 0 ? dp1[k][l - x] : 0)) % mod;
