template<typename T>
vector<T> sieve(T n){//n以下の整数について最小の素因数を調べる
    vector<T>prime(n+1);
		for(int i=0;i<=n;++i)prime[i]=i;
    for(int i=2;i*i<=n;i++){
        if(prime[i]<i)continue;
				for(int j=i*i;j<=n;j+=i){
					if(prime[j]>=i)prime[j]=i;
				}