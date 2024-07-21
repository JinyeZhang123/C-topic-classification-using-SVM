template<typename T>
T lcm(vector<T> a)
{
	vector<int> b;
	for (int i = 1; i <= a.size(); i += 2)
	{
		if (i == a.size())
		{
			b.push_back(a.at(i - 1));
		}