template<typename C>
	int find(const int start, const int end, int l, int r, int k, const C check, T& checknum, const bool b, const function<T(T, T)> revf) {
		//cerr << checknum << '\n';
		//範囲外またはそこがすでに満たさないとき
		//cerr << k << ',' << checknum << '\n';
		if (start <= l && r <= end && !check(seg[k], checknum)) {
			checknum = revf(checknum, seg[k]);
			return -1;
		}