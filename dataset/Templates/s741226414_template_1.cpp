template<typename t>
t GCD(t a, t b) {
	while (max(a, b) % min(a, b)) {
		if (a > b)a %= b;
		else b %= a;
	}