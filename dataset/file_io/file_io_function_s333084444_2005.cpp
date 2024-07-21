int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());
	//std::ofstream ofs("456.csv");
	//std::chrono::system_clock::time_point t_st = std::chrono::system_clock::now();

	int N = 0;
	std::cin >> N;
	std::vector<std::string> temp(N), A(N), B(N);
	for (int i = 0; i < N; i++) {
		std::cin >> temp[i];
		A[i] = B[i] = temp[i];
	}