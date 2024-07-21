template<typename T>
T floor_sum(T n, T m, T a, T b){
    T ret = (a/m)*(n*(n-1)/2) + (b/m)*n;
    a %= m, b %= m;
    T y = (a*n+b)/m;
    if(y == 0) return ret;
    ret += floor_sum(y, a, m, a*n-(m*y-b));
    return ret;
}