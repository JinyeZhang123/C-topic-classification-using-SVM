    		f[i][j] = ( j ? (f[i-1][j-1] + f[i-1][j] * j)%mod : 0 );
