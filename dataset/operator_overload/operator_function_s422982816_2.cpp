min_info operator+(const min_info &o) {
		if (o.val < val) return o;
		else return *this;
	}