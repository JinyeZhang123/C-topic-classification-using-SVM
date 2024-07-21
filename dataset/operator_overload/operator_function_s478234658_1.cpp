bool operator<(const Store &a, const Store &b) {
	return a.b * b.a < a.a * b.b;
}