template<typename T>
ostream& operator <<(ostream &os, vector<T> &v) {
	os << v[0];
	for (int i = 1; i < v.size(); i++) os << " " << v[i];
	return (os);
}