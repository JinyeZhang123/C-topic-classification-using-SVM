template<typename T>
T lcm(T x,T y){
    return x*y/GCD(x,y);
}