bool operator<(const node &rhs) {
		if (last != rhs.last) return last > rhs.last;
		return b > rhs.b;
	}