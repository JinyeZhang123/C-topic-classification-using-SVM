int main(int argc, char* argv[])
{
	auto file = (argc == 1) ? std::ifstream() : std::ifstream(argv[1]);
	std::istream& stream = (argc == 1) ? std::cin : file;
	if (argc == 1)
	{
		std::cin.tie(0);
		std::ios::sync_with_stdio(false);
	}