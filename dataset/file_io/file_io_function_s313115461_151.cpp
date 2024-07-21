int main(void) {

	//test??¨
	//std::ifstream in("test.txt");
	//std::cin.rdbuf(in.rdbuf());

	int n;
	std::cin >> n;

	std::string str_t, str_h;
	int tarou = 0, hanako = 0;

	for (int i = 0; i < n; i++) {
		std::cin >> str_t >> str_h;

		bool flg = 1;
		int index = 0;

		while (flg && index <= str_t.length() && index <= str_h.length()) {
			if (str_t[index] > str_h[index]) {
				tarou = tarou + 3;
				flg = 0;
			}