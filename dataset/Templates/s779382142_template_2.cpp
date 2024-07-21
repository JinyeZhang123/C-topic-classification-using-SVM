template<typename TYPE>
TYPE lcm(TYPE x, TYPE y){
	return x * y / gcd(max(x, y), min(x, y));
}