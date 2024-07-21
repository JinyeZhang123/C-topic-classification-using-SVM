Matrix operator*(Matrix a,Matrix b){
    ll n = size_of(a);
    Matrix c(n,0);
    rep(i,n) rep(j,n) rep(k,n){
        c.mat.at(i).at(j) += (a.mat.at(i).at(k) * b.mat.at(k).at(j))%mod;
        c.mat.at(i).at(j) %= mod;
        //pr2d(c.mat);
    }