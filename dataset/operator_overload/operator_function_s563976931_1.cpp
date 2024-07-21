bool operator==(const die& l, const die& r) {
	for (int i = 0; i < 6; i++) {
		if (l.val[i] != r.val[i]) {
			return false;
		}