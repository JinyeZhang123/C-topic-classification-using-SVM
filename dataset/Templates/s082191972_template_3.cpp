template <class T>
T pow(T a, T b)
{
	T r = 1;
	
	while (b)
	{
		if (b & 1)
			r = mul(r, a);
		
		b >>= 1;
		a = mul(a, a);
	}