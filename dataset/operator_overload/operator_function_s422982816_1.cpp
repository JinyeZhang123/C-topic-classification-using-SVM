minima operator+(const minima &o) {
		return minima(min(val, o.val));
	}