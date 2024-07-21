				table[i][j]=max(table[i][j-1],table[i-weight[j]][j-1]+value[j]);
