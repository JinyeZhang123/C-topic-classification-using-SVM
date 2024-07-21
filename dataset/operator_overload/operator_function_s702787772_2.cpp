Point2d operator-(Point2d &p) {
		Point2d result;
		result.set(this->x - p.X(), this->y - p.Y());
		return result;
	}