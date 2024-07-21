template<typename T>
vector<T> divisor_enumeration(T n){
    vector<T> ret1, ret2;
    for(T i=1; i*i<=n; i++){
        if(n%i == 0){
            ret1.push_back(i);
            if(i*i != n) ret2.push_back(n/i);
        }