bool operator<(A a, A b) {
	if (a.x != b.x) return a.x < b.x;
	return !a.y;
}