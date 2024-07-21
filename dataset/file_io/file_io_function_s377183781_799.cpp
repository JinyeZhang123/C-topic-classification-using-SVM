int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());
	//std::ofstream ofs("456.csv");
	//std::chrono::system_clock::time_point t_st = std::chrono::system_clock::now();

	std::string str;
	std::cin >> str;

	for (int i = str.length() - 1; i >= 0; i--) {
		std::cout << str[i];
	}