template<typename TYPE>
TYPE gcd(TYPE x, TYPE y){
	TYPE r = x % y;
	if (r == 0.0) return y;
	else return gcd(y, r);
}