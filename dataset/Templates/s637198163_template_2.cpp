template<typename T>
T LCM(T x,T y){
    T gc = GCD(x,y);
    return x*y/gc;
}