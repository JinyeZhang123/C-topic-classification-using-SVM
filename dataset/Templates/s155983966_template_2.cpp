template<typename X>
bool min_u(X&m, X v)
{
	if(m>v)
	{
		m=v;
		return true;
	}