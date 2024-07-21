Point operator*(ld k, const Point &p) {
		return Point(k * p.x, k * p.y);
	}