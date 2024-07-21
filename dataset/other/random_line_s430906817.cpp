			else D[i][j] = min(D[i-1][j-1]+equal(S[i-1],T[j-1]),min(D[i-1][j]+1,D[i][j-1]+1));
