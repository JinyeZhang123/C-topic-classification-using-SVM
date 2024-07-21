template<class T>
vector<bool> getPrimeTable(T max)
{
	vector<bool> table(max + 1);
	fill(table.begin(), table.end(), false);

	table[2] = true;

	for(T i = 3; i <= max; i++)
	{
		table[i] = true;
		for(T j = 2; j*j <= i; j++)
		{
			if(!(i % j))
			{
				table[i] = false;
				break;
			}