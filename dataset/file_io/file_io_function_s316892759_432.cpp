int main(void) {

	//test??¨
	//std::ifstream in("test.txt");
	//std::cin.rdbuf(in.rdbuf());

	int n;
	std::cin >> n;

	while (n != 0) {

		std::valarray<double> s(n);
		for (int i = 0; i < n; i++) {
			std::cin >> s[i];
		}