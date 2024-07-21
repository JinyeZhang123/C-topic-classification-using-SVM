			for(int j = k-1; j >= 0; j--) cnt[i+1][j][k] = cnt[i+1][j+1][k] + cnt[i][j][k];
