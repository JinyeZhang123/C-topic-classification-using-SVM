int main(void) {

	//test??¨
	//std::ifstream in("test.txt");
	//std::cin.rdbuf(in.rdbuf());

	std::string str;
	std::string temp;
	while (std::cin >> temp) {
		str += temp;
	}