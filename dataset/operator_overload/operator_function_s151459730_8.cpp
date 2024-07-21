bool operator<(A a, A b) {
	if (a.s != b.s) return a.s < b.s;
	return a.id < b.id;
}