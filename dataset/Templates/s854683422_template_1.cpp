template<typename T>
T euler_phi(T n){
    T res = n;
    for(T k=2; k*k<=n; ++k){
        if(n % k)continue;
        for(res=res/k*(k-1); n%k == 0; n/=k);
    }