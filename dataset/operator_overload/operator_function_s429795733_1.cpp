bool operator<(const node& lhs, const node& rhs) {
	if(fabs(lhs.ratio-rhs.ratio) < eps) {
		return lhs.name < rhs.name;
	}