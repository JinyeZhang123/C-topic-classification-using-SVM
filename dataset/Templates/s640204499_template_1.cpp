template<typename T> 
void getmat(std::vector<std::vector<T>> &mat,unsigned n,unsigned m)
{
	for (int i = 0; i < n; i++) {
		std::vector<T> v;
		for (int i = 0; i < m; i++) {
			double n;
			std::cin >> n;
			v.push_back(n);
		}