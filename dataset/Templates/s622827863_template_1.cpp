template<typename T>
vector<T> trialDivision(T a) {
	vector<T> res;
	T i = 2;
	while (i * i <= a) {
		if (a % i == 0) {
			a /= i;
			res.push_back(i);
		}