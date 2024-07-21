                f[i][j][k]=max(k||s[i]==s[j]?f[i+1][j-1][k-!!(s[i]^s[j])]+1+!!(i^j):0,max(f[i][j-1][k],f[i+1][j][k]));
