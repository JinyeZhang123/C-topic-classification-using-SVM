template<typename T>
T extgcd(const T & a, const T & b, T &x, T &y) {
	T a0 = a, a1 = 1, a2 = 0, b0 = b, b1 = 0, b2 = 1;
	while (b0 > 0) {
		T q = a0 / b0, r = a0 % b0;
		T nb1 = a1 - q * b1, nb2 = a2 - q * b2;
		a0 = b0; b0 = r;
		a1 = b1; b1 = nb1;
		a2 = b2; b2 = nb2;
	}