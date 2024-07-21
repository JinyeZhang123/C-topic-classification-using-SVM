template <class Type> Type GCD(vector<Type> v)
{
	Type ret = v[0];

	for (int i = 1; i < v.size(); i++)
	{
		ret = GCD(ret, v[i]);
	}