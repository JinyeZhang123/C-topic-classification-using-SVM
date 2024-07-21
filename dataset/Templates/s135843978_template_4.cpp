template <class T, class U> istream &operator>>(istream &is, pair<T, U> &p) {
	return is >> p.first >> p.second;
}