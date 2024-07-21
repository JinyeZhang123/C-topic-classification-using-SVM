template<typename T> bool is_prime(T n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}