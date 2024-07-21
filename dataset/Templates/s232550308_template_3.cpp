template<typename T>
T lcm(T n, T m) {
	return abs(n * m) / gcd(n, m);//gl=xy
}