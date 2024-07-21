Matrix operator*(Matrix a, Matrix b){
  Matrix c;
  rep(i, n)rep(j, n)rep(k, n){
    c.val[i][j] += a.val[i][k]*b.val[k][j];
    c.val[i][j] %= MOD;
  }