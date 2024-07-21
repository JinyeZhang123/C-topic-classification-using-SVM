class Point :private D3
{
public:
	Point(long double , long double , long double);
	long double getX();
	long double getY();
	long double getZ();

	bool operator== (Point);
	long double S_point(Point , Point);
}