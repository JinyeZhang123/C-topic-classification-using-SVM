int operator*(const point &lhs, const point &rhs)
	{
		return lhs.x * rhs.y - lhs.y * rhs.x;
	}