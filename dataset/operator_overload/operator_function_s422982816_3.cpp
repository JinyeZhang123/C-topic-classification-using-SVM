maxima operator+(const maxima &o) {
		return maxima(max(val, o.val));
	}