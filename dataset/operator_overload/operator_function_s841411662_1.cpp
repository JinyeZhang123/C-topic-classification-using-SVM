ModInt operator+=(const ModInt p){
        a+=p.a;
        if( a>=MOD ) a-=MOD;
        return *this;
    }