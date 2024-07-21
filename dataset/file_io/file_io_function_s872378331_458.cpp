int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());

	std::string str;
	double x = 0, y = 0, rad = 0;
	int distance = 0, degree = 0;

	while (std::cin >> str) {

		std::vector<std::string> v = Split_String(str, ',');
		distance = std::stoi(v[0]);
		rad = degree * de_PI / 180.0;

		x += distance * sin(rad);
		y += distance * cos(rad);

		degree += std::stoi(v[1]);
	}