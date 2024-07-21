    for (int i = (int)DP[v].size() - 1; i >= 0; --i) right[i] = max(right[i + 1], DP[v][i] + G[v][i].cost);
