template<typename T, class F>
void prime_factors(T n, const F f){
    for(T k=2; k*k<=n; ++k){
        while(n % k == 0)f(k), n /= k;
    }