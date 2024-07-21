ModInt operator*=(const ModInt p){
        a=(a*p.a)%MOD;
        return *this;
    }