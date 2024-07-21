ModInt operator-(const ModInt l,const int r){
        return add(l,ModInt::raw(mod-r));
    }