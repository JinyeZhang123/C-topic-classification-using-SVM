					result[i | (1 << k)][k][s] = min(result[i | (1 << k)][k][s], result[i][j][s] + graph[j][k]);
