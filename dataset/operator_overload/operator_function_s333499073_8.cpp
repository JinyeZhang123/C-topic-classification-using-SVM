bool operator<(A a, A b) {
	if (a.prob != b.prob) return a.prob < b.prob;
	if (a.pen != b.pen) return a.pen > b.pen;
	return a.id > b.id;
}