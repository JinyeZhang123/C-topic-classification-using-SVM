bool operator<(team& lhs, team& rhs) {
	if (lhs.cor != rhs.cor)
		return lhs.cor > rhs.cor;
	if (lhs.pen != rhs.pen)
		return lhs.pen < rhs.pen;
	return lhs.id < rhs.id;
}