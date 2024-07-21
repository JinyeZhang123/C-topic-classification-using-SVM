int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());
	//std::ofstream ofs("456.csv");
	//std::chrono::system_clock::time_point t_st = std::chrono::system_clock::now();

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			std::cout << i << "x" << j << "=" << i*j << std::endl;
		}