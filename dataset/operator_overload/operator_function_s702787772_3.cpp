Point2d operator*(double a) {
		Point2d result;
		result.set(this->x * a, this->y * a);
		return result;
	}