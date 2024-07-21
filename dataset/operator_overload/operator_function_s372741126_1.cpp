Matrix operator*(Matrix a, Matrix b){
    Matrix c;
    rep(i,50){
        rep(j,50){
            rep(k,50){
                c.V[i][j] += a.V[i][k] * b.V[k][j] % MOD;
                c.V[i][j] %= MOD;
            }