int main(void) {

	
	//test??¨
	//std::ifstream in("test.txt");
	//std::cin.rdbuf(in.rdbuf());

	//??\???
	int n;
	std::cin >> n;
	std::vector<std::vector<int>> dice(n, std::vector<int>(6));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 6; j++) {
			std::cin >> dice[i][j];
		}