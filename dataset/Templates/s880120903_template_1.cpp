template<typename T>
vector<T> prime_factorization(T n) 
{
	vector<T> res;
	T check = 2;

	while (check*check <= n) {
		if (n%check == 0) {
			n /= check;
			res.push_back(check);
		}