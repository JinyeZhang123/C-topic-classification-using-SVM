template<class T>
T Distance(const Point<T> &a, const Point<T> &b)
{
	return sqrt( Square(a.x-b.x) + Square(a.y-b.y) );
}