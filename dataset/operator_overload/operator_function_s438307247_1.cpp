bool operator<(const A &a) {
		int r = min(mi - a.x, a.y - ma);
		int k = min(mi - x, y - ma);
		return k < r;
	}