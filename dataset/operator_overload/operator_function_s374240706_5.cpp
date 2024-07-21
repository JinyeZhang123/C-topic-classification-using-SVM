bool operator<(const Point &p) {
		if (x != p.x)
			return x < p.x;
		else
			return y < p.y;
	}