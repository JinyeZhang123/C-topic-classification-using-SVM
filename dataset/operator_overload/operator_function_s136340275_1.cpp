Point2D operator-(Point2D &inp) {
		Point2D ans;
		ans.x = this->x - inp.x;
		ans.y = this->y - inp.y;
		return ans;
	}