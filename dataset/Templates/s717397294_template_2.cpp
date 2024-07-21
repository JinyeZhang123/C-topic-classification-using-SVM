template<typename Itr>
	void PrintLine(Itr begin, Itr end)
	{
		bool first = true;

		for (int i = 0; begin != end; ++begin, ++i)
		{
			if (!first)
			{
				std::cout << ' ';
			}