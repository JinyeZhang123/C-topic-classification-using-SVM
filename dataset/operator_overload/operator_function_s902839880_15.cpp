ModInt operator*(const ModInt l,const long long r){
        return mul(l,ModInt::get(r));
    }