template <class T> ostream &operator<<(ostream &os, const vector<T> &v) {
	for (auto it=v.begin();it!=v.end();) os << *it, os << " \n"[++it==v.end()];
	return os;
}