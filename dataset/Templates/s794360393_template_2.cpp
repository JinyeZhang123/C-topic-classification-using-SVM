template<typename T> T gcd(T x, T y) {
	if (y == 0) return x;
	else return gcd(y, x % y);
}