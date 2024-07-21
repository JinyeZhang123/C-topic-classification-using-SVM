template <class T>
T add(T a, T b)
{
	T r = a + b;
	
	if (r >= mod)
		r -= mod;
		
	return r;
}