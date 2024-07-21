bool operator<(const triple<A, B, C>& a, const triple<A, B, C>& b)
{
	if (a.X != b.X)
		return a.X < b.X;
	if (a.Y != b.Y)
		return a.Y < b.Y;
	return a.Z < b.Z;
}