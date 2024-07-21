		memo[i][j] = min(costb[i][j]+solve(i,j+1),costw[i][j]+solve(i+1,j));
