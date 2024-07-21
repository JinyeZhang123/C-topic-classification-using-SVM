bool operator<(const point& a, const point& b) {
		return real(a) != real(b) ? real(a) < real(b) : imag(a) < imag(b);
	}