P operator-(const P& a, const P& b) {
	return P(a.first - b.first, a.second - b.second);
}