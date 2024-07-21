int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());

	int n = 0;
	std::stack<int> S;
	std::vector<int> ans;

	while (std::cin >> n) {
		if (n != 0) {
			S.push(n);
		}