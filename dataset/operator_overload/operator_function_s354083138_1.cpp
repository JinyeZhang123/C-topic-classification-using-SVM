bool operator<(const Pt& a, const Pt& b) {
		return real(a) != real(b) ? real(a) < real(b) : imag(a) < imag(b);
	}