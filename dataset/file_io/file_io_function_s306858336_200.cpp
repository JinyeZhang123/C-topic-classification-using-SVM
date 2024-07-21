int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());

	double n = 0;
	std::vector<double> ans;

	while (std::cin >> n) {
		double sum = 0;
		double div = 600 / n;
		for (int i = 1; i < div; i++) {
			sum += n*(n*i)*(n*i);
		}