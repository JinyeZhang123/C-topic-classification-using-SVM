bool operator<(const P& a, const P& b)
{
	return a.e > b.e || a.e == b.e && a.s < b.s;
}