template<typename S, typename T>
std::ostream& operator<<(std::ostream& os, const std::pair<S, T>& p) {
	os << "(" << p.first << ", " << p.second << ")"; return os;
}