bool operator<(const Edge &e, const Edge &f) {
	return e.weight != f.weight ? e.weight > f.weight : e.dst < f.dst;
}