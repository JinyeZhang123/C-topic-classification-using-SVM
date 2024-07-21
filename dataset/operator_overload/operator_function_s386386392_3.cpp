BigInt operator+(BigInt a, BigInt b) {
	if (a < b)swap(a, b);
	vector<int> s = a.vget(), t = b.vget();
	rep(i, t.size()) {
		s[i] += t[i];
	}