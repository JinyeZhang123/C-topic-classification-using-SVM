template<class T> inline ostream& operator<<(ostream& os, const vector<T>& v) {
	size_t i = 0, n = v.size();
	for (const auto& e : v) {
		os << e;
		if (i + 1 < n) os << " ";
		++i;
	}