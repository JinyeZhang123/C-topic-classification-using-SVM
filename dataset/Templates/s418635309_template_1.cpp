template<typename T>
long long modpow(const T n,const T p,const T mod){
	if(p==0) return 1;
	if(p%2==0){
		long long a=modpow(n,p/2,mod);
		return a*a%mod;
	}