int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());

	int n = 0, ans = 0;
	std::vector<int> A;

	while (std::cin >> n) {
		A.push_back(n);
	}