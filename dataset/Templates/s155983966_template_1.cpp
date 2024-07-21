template<typename X>
bool max_u(X&m, X v)
{
	if(m<v)
	{
		m=v;
		return true;
	}