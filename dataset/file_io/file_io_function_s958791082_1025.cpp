int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());
	//std::ofstream ofs("456.csv");
	//std::chrono::system_clock::time_point t_st = std::chrono::system_clock::now();

	double a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;
	std::vector<double> X, Y;

	while (std::cin >> a) {
		std::cin >> b >> c >> d >> e >> f;
		X.push_back(RoundOff((b*f - c*e) / (b*d - a*e), 4));
		Y.push_back(RoundOff((a*f - c*d) / (a*e - b*d), 4));
	}