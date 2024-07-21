template<typename T>
T gcd(T n, T m) {
	T tmp;
	while (m!=0) {
		tmp = n % m;
		n = m;
		m = tmp;
	}