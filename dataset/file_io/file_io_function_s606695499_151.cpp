int main(void) {

	//test??¨
	//std::ifstream in("test.txt");
	//std::cin.rdbuf(in.rdbuf());

	std::string str;
	int m;
	int h;
	std::vector<std::string> ans;

	std::cin >> str;
	while (str != "-") {

		std::cin >> m;
		for (int i = 0; i < m; i++) {
			std::cin >> h;
			str += str.substr(0, h);
			str.erase(str.begin(), str.begin() + h);
		}