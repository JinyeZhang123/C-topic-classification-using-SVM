template<typename T>
vector<T>divisor(T n){//約数列挙
    vector<T>v;
    for(T i=1;i*i<=n;++i){
        if(n%i==0){
            v.push_back(i);
        if(i*i!=n)v.push_back(n/i);
        }