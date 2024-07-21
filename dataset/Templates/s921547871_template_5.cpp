template<class T>
vector<T> getPrimeList(T max)
{
	vector<T> table;

	table.push_back(2);

	for(T i = 3; i <= max; i++)
	{
		bool flag = true;
		for(T j = 2; j*j <= i; j++)
		{
			if(!(i % j))
			{
				flag = false;
				break;
			}