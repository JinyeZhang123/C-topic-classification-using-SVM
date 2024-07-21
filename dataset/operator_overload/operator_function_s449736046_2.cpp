bool operator<(const Point &a, const Point &b) {
	int xsgn = sgn(real(a) - real(b));
	if (xsgn == 0) {
		return sgn(imag(a) - imag(b)) < 0;
	}