ModInt operator*(ModInt a){

        ModInt tmp = ModInt(*this);

        tmp.n = (tmp.n * a.n) % tmp.p;

        return tmp;
    }