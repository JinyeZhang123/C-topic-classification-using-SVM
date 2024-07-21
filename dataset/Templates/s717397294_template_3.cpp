template<typename T>
	void Print(const std::vector<T>& sequence)
	{
		for (const auto& e : sequence)
		{
			std::cout << e << '\n';
		}