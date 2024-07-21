template<typename T>
map<T,ll> factorize(T x){
	map<T,ll> res;
	for(ll i=2;i*i<=x;i++){
		while(x%i==0){
			x/=i;
			res[i]++;
		}