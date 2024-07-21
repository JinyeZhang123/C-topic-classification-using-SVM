modint operator-(const long long &other) {
        modint ret;
        ret.p = p;
        ret.num = (num - (other%p) + p) % p;
        return ret;
    }