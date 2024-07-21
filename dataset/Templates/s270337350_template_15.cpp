template<typename S, typename T>
std::ostream& operator<<(std::ostream & os, const std::map<S, T> & m) {
	os << "{";
	for (auto it = m.cbegin(); it != m.cend();) { os << it->first << ":" << it->second; ++it; os << (it == m.cend() ? "" : ", "); }