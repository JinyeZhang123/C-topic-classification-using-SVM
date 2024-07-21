template<typename T>
T pow(T x, T e){
    T res = 1;
    for(; e>0; e>>=1, (x*=x)%=mod)if(e & 1)(res *= x) %= mod;
    return res;
}