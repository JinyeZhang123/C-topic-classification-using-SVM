ModInt operator-(const ModInt l,const long long r){
        return add(l,-ModInt::get(r));
    }