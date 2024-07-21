template<typename T>
vector<T> prime_factorize(T n) {
	vector<T> ret;
	for(T i = 2; i * i <= n; ++i) {
		while( n % i == 0 ) {
			ret.push_back(i);
			n /= i;
		}