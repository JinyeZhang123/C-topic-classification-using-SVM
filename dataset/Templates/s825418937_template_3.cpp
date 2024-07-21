template<typename T>
map<T, T> getPrimeFactor(T n) {
	map<T, T> ret;
	for (T i = 2; i * i <= n; ++i) {
		while (n % i == 0) {
			ret[i] ++;
			n /= i;
		}