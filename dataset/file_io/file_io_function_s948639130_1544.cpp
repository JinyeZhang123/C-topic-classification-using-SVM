int main(void) {

	//std::ifstream in("123.txt");	std::cin.rdbuf(in.rdbuf());

	int n = 0;
	std::cin >> n;
	double x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;

	std::complex<double> a, b, c, ans;
	double r = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		a.real(x1);	a.imag(y1);
		b.real(x2);	b.imag(y2);
		c.real(x3);	c.imag(y3);
		ans = Circumcenter(a, b, c);
		r = circumradius(a, b, c);
		std::cout << std::fixed << std::setprecision(3) << RoundOff(ans.real(), 4);
		std::cout << " ";
		std::cout << std::fixed << std::setprecision(3) << RoundOff(ans.imag(), 4);
		std::cout << " ";
		std::cout << std::fixed << std::setprecision(3) << RoundOff(r, 4) << std::endl;
	}