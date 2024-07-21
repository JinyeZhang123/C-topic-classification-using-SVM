class union_find {
public:
	vector<int> dat;
	union_find(int n) {
		dat.assign(n, -1);
	}                                                                                                               