template<typename Type> class RMQ {
private:
	int size_; vector<Type> dat;
	Type query_(int a, int b, int k, int l, int r) {
		if (r <= a || b <= l) return numeric_limits<Type>::max();
		if (a <= l && r <= b) return dat[k];
		int lc = query_(a, b, 2 * k, l, (l + r) / 2);
		int rc = query_(a, b, 2 * k + 1, (l + r) / 2, r);
		return min(lc, rc);
	}