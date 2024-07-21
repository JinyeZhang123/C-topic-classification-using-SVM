template<class T> class segment_tree {
	int N = 1; // the number of leaves
	std::vector<T> value;

public :
	const std::function<T(T, T)> op; // binary operation
	const T id; // identity element

	segment_tree(const std::vector<T>& v, const std::function<T(T, T)>& f, const T& t) : op(f), id(t) {
		int n = v.size();
		while (N < n) N *= 2;
		value.resize(N * 2, id);
		for (int i = 0; i < n; ++i) value[N + i] = v[i];
		for (int i = N - 1; i > 0; --i) value[i] = op(value[i * 2], value[i * 2 + 1]);
	}