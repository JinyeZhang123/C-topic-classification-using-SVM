template<class T>
ostream& operator<<(ostream& ost, const vector<T>&v) {
	ost << "{";
	for (int i = 0; i<(int)v.size(); i++) {
		if (i)ost << " ";
		ost << v[i];
	}