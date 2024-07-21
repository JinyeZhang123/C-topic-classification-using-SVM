ModInt operator+(ModInt a){

        ModInt tmp = ModInt(*this);

        tmp.n += a.n;

        if(tmp.n > tmp.p){
            tmp.n -= tmp.p;
        }