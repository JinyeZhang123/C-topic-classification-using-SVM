template <typename T> string to_string(const T& n)
{
	std::ostringstream stm;
	stm << n;
	return stm.str();
}