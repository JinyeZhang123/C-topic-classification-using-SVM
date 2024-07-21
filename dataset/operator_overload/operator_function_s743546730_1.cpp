bool operator<(const block &lhs, const block &rhs) {
	return lhs.w + lhs.s < rhs.w + rhs.s;
}