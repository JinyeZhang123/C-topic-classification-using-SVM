template <class T>
T mul(T a, T b)
{
	T r = 0;
	
	while (b)
	{
		if (b & 1)
			r = add(r, a);
			
		b >>= 1;
		a <<= 1;
		
		if (a >= mod)
			a -= mod;
	}