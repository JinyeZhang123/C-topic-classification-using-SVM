point operator-(const point &lhs, const point &rhs)
	{
		return point(lhs.x - rhs.x, lhs.y - rhs.y);
	}