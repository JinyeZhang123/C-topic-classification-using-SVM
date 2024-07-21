modulo operator/(const modulo &o) {
		T x, y;
		T g = gcd_ext(o.n, M, &x, &y);
		if (g != 1) return 0;
		else return modulo(n * (x % M));
	}