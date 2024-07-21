int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());

	std::string str;
	std::getline(std::cin, str);
	std::transform(str.begin(), str.end(), str.begin(), toupper);
	std::cout << str << std::endl;

}