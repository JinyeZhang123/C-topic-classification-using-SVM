						DP[i][cloth[j].f] = max(DP[i][cloth[j].f], DP[i - 1][cloth[j].f - k] + k);
