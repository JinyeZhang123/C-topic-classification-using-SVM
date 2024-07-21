int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());

	int n = 0;
	std::cin >> n;

	unsigned long long pro = 1;
	for (int i = n; i >= 1; i--) {
		pro *= i;
	}