bool operator<(const edge& left, const edge& right) {
	if (left.to == right.to) return left.cam < right.cam;
	return left.to < right.to;
}