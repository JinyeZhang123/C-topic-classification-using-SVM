template<typename T>
T eular_totient(T n) {
	T ret = n;
	for(T i = 2; i * i <= n; ++i) {
		if( n % i == 0 ) {
			ret = ret / i * (i - 1);
		}