ModInt operator-(ModInt a){

        ModInt tmp = ModInt(*this);

        tmp.n -= a.n;

        if(tmp.n < 0){
            tmp.n += tmp.p;
        }