template<int N>
	std::array<int, N> GetValue(std::istream& stream)
	{
		std::string buf;
		std::getline(stream, buf);

		std::stringstream sstr(buf);
		std::array<int, N> retval;

		for (int i = 0; i < N; ++i)
		{
			std::getline(sstr, buf, ' ');
			retval[i] = std::stoi(buf);
		}