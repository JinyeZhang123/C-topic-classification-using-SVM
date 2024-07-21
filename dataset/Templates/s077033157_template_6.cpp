template<typename T>
istream& operator >>(istream &is, vector<T> &v) {
	for (auto &u : v) is >> u; return (is);
}