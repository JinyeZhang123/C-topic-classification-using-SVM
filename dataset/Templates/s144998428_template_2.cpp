template< typename Type >
Type gcd(Type x, Type y) {

	// x >= y ????????????
	if( x < y ) std::swap(x, y);

	while(0 < y) {
		Type r = x % y;
		x = y;
		y = r;
	}