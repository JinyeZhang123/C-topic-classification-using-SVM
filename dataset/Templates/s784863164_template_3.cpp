template <class T, class U>
std::ostream& operator<<(std::ostream &os, const std::pair<T, U> &p) {
	os << "(" << p.first << ", " << p.second << ")";
	return os;
}