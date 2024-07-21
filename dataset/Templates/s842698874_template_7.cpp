template<typename T>
vector<int> prime_factorization(T m) {

	vector<int> div;
	int n = m;
	for (T i = 2; i * i <= m; i++) {
		if (m % i == 0) {
			div.push_back(i);
			while (m % i == 0) {
				m /= i;
			}