template<typename T>
vector<T> prime_factor(T n)
{
	vector<T> pf;

	T m = n;
	for (T i = 2; m > 1;)
	{
		if (m % i == 0)
		{
			m /= i;
			if (pf.empty() || pf.back() != i)
			{
				pf.push_back(i);
			}