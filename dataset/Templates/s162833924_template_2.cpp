template<typename T>
T extgcd(T a, T b, T &x, T &y){
    T ret = a;
    if(b != 0){
        ret = extgcd(b, a%b, y, x);
        y -= (a / b) * x;
    }