template<typename T>
T lcm(T x, T y) {
	T tmp = gcd(x, y);
	return x * y / tmp;
}