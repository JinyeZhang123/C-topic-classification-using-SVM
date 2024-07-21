max_info operator+(const max_info &o) {
		if (val < o.val) return o;
		else return *this;
	}