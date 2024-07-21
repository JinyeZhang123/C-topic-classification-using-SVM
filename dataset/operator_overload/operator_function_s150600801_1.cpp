P operator-(const P a, const P b) {
	return P(add(a.first, -b.first), add(a.second, -b.second));
}