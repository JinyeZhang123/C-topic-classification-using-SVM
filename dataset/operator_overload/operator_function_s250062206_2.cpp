pll operator-(const pll& p1, const pll& p2)
{
	return {p1.st - p2.st, p1.nd - p2.nd}