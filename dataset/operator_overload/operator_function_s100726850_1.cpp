Vec operator+(const Vec& lhs, const Vec& rhs) {
	return std::make_pair(lhs.first+rhs.first, lhs.second+rhs.second);
}