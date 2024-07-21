bool operator<(const object &lhs, const object &rhs)
	{
		return a[lhs.p] > a[rhs.p];
	}