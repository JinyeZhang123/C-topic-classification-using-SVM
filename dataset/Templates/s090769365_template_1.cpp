template<class T>
std::vector<T> factorize(T N){
    std::vector<T> factor;
    for(unsigned i=2;i*i<=N;++i)
        while(N%i==0){
            factor.push_back(i);
            N/=i;
        }