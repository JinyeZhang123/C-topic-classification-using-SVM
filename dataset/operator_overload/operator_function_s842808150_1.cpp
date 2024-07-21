bool operator<(const event &lhs, const event &rhs) {
	if (lhs.t != rhs.t)
		return lhs.t < rhs.t;
	return lhs.d < rhs.d;
}