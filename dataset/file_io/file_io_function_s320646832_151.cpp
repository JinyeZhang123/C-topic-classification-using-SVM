int main(void) {

	//test??¨
	//std::ifstream in("test.txt");
	//std::cin.rdbuf(in.rdbuf());

	std::string s, p;
	std::cin >> s >> p;

	s += s;
	s += s;

	if (s.find(p) <= s.length()) {
		std::cout << "Yes" << std::endl;
	}