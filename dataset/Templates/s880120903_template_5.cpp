template<typename T>
T totient_function(T n) 
{
	//φ(n) = n*Π(1-1/p)
	//※pはnの素因子全体
	T res = n;
	if (n % 2 == 0) {
		res /= 2;
		do { n /= 2; }