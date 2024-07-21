template<typename T>
istream& operator>>(istream& is, vector<T> &v) {
	for (auto &it : v)is >> it;
	return is;
}