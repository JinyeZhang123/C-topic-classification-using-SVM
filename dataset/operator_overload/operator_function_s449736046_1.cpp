bool operator==(const Point &a, const Point &b) {
	bool xeq = sgn(real(a) - real(b)) == 0;
	bool yeq = sgn(imag(a) - imag(b)) == 0;
	return xeq && yeq;
}