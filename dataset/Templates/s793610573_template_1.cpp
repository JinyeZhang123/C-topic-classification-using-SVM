template<typename T> struct segment_tree {
private :
	int N;
	std::vector<T> value;
public :
	const std::function<T(T, T)> op;
	const T id;

	segment_tree(const std::vector<T>& a, const std::function<T(T, T)>& f, const T& t) : op(f), id(t) {
		int n = a.size(), m = 1;
		while (m < n) m *= 2;
		value.resize((N = m) * 2, id);
		for (int i = 0; i < n; i++) value[N + i] = a[i];
		for (int i = N - 1; i > 0; i--) value[i] = op(value[i * 2], value[i * 2 + 1]);
	}