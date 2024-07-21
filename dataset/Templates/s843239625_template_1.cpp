template<class T>
vector<pair<T,T>> divisor(T n){
	vector<pair<ll,ll>> res;
	for(T i = 1; i * i <= n; i++){
		if(n % i == 0){
			T j = n / i;
			res.emplace_back(i, j);
			res.emplace_back(j, i);
		}