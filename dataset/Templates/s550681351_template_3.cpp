template<typename T>
ostream& operator<<(ostream& out, const pair<T, T>& p) {
	cout << "(" << p.first << ", " << p.second << ")";
	return out;
}