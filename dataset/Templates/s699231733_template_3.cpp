template <class Type> vector<Type> Divisors(Type n)
{
	vector<int> c;

	for (Type i = 1; i * i <= n; i++)
	{
		if (n % i == 0) { c.push_back(i); if (i * i != n) { c.push_back(n / i); }