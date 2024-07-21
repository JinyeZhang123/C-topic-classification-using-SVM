template<class T>
T input()
{
	T val, val1;
	std::cin >> val >> val1;
	if (val == '\0')return EOF;
	else			return val+val1;
}