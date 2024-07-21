bool operator<(const Point& a1, const Point& a2) {
	if ((a1.b + 1LL) * a2.a < (a2.b + 1LL) * a1.a) return true;
	return false;
}