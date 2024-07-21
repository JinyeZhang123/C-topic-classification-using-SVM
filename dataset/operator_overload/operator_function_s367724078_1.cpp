P operator-(const P& lhs, const P& rhs)
{
	return P(lhs.first-rhs.first,lhs.second-rhs.second);
}