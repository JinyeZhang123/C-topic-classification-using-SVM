bool operator<(const Cake& c) {
		if (t != c.t) return t < c.t;
		if (w * h != c.w * c.h) return w * h < c.w * c.h;
		return w < c.w;
	}