int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());

	int w = 0, n = 0;
	std::cin >> w >> n;

	std::vector<int> A(w + 1);
	std::iota(A.begin(), A.end(), 0);

	for (int i = 0; i < n; i++) {

		int a = 0, b = 0;
		std::string temp;
		std::cin >> temp;
		a = std::stoi(temp.substr(0, temp.find(',', 0)));
		b = std::stoi(temp.substr(temp.find(',', 0) + 1, temp.length()));
		std::swap(A[a], A[b]);

	}