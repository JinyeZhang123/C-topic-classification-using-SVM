			chk(f[i][k]+=2ll*(qpw(2,b[y]-b[k])-(k==y?0:qpw(2,b[y]-b[k+1]))+P)%P*f[i-1][j]%P);
