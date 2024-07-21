bool operator<(BigInt a, BigInt b) {
	if (a.length() < b.length())return true;
	if (a.length() > b.length())return false;
	string s = a.get(), t = b.get();
	rep(i, a.length()) {
		if (s[i] < t[i])return true;
		if (s[i] > t[i])return false;
	}