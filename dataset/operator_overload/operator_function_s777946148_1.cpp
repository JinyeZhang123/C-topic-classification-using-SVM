MIN operator+(const MIN &other) {
		return e < other.e ? MIN(e) : MIN(other.e);
	}