template<typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v) {
	os << "{";
	for (size_t i = 0; i < v.size(); ++i) os << v[i] << ((i + 1 < v.size()) ? ", " : ""); os << "}