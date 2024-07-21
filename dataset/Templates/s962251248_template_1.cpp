template<typename T>
T GCD(T u,T v){
    return v ? GCD(v,u%v) : u;
}