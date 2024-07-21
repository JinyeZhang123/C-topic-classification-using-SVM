template<typename T> void simultaneous_equation(T &x, T &y, T a, T b, T c, T d, T e, T f)
{
	if (a == 0 || b == 0 || d == 0 || e == 0)
	{
		if (a == 0)
		{
			y = c / b;
			x = (f - e * y) / d;
		}