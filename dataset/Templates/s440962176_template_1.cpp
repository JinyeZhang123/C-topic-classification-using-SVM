template< typename T >
map<T,int> prime_factorization(T n) {
	map<T,int> res;
	for(T i=2;i*i<=n;i++) {
		while(n%i==0) {
			res[i]++;
			n/=i;
		}