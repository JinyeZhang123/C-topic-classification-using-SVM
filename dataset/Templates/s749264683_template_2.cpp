template<typename T>
istream& oprator>> (istream &is, vector<T>& v) {
	for (auto &it : v)is >> it;
	return is;
}