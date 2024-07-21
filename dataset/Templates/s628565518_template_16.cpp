template<typename T1, typename T2>
inline T1 power(T1 x, T2 n) {
	return n ? power(x*x,n/2)*(n%2?x:1) : 1;
}