template<typename T>
std::ostream & operator<<(std::ostream & os, const std::set<T> & v) {
	os << "{";
	for (auto it = v.cbegin();;) {
		os << *it; ++it;
		if (it == v.cend()) { os << "}