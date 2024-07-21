bool operator<(const edge &a, const edge &b)
{
	return a.u == b.u ? a.v < b.v : a.u < b.u;
}