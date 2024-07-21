template<typename T> struct segment_tree {
	int N;
	std::vector<T> V;
	std::function<T(T, T)> F;
	T E;

	segment_tree(std::vector<T>& a, std::function<T(T, T)> f, T e) : F(f), E(e) {
		int m = 1;
		while (m < a.size()) m *= 2;
		V.resize(N = m * 2, E);
		for (int i = 0; i < a.size(); i++) V[m + i] = a[i];
		for (int i = m - 1; i > 0; i--) V[i] = F(V[i * 2], V[i * 2 + 1]);
	}