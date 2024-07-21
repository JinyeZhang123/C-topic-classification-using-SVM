int main(void) {

	//test??¨
	//std::ifstream in("test.txt");
	//std::cin.rdbuf(in.rdbuf());

	int n;
	std::cin >> n;

	std::valarray<double> x(n);
	for (int i = 0; i < n; i++) {
		std::cin >> x[i];
	}