class D3
{
public:
	long double X , Y , Z , EPS;

	D3(long double x_ = 0.0L , long double y_ = 0.0L , long double z_ = 0.0L)
	{
		X = x_;
		Y = y_;
		Z = z_;
		EPS = 1e-9L;
	}