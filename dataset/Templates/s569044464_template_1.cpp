template<typename T>
T gcd(T a, T b) {
	if( a < b ) swap(a, b);
	
	T r;
	while( r = a % b ) {
		a = b;
		b = r;
	}