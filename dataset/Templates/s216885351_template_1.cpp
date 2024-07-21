template<typename T>
struct segment_tree {
	long long N;					// the size of V
	long long M;					// the number of leaves
	std::vector<T> V;				// Segment Tree, 1-indexed
	std::vector<T> W;				// vector for laze evaluation, 1-indexed
	std::vector<bool> flag;			// true : unevaluated elements exists under W[i]
	std::function<T(T, T)> OP1;		// binary operation for V
	std::function<T(T, T, T)> OP2;	// operation for lazy evaluation (W -> V)
	std::function<T(T, T)> OP3;		// binary operation for W
	T ID1;							// identity element of OP1
	T ID2;							// identity element of OP2 and OP3

	segment_tree(
		std::vector<T>& a,
		std::function<T(T, T)> f,
		std::function<T(T, T, T)> g,
		std::function<T(T, T)> h,
		T t1, T t2
	) : OP1(f), OP2(g), OP3(h), ID1(t1), ID2(t2) {
		M = 1;
		while (M < a.size()) M *= 2;
		N = 2 * M;
		V.resize(N, ID1); W.resize(N, ID2); flag.resize(N, false);
		for (long long i = 0; i < a.size(); i++) V[M + i] = a[i];
		for (long long i = M - 1; i > 0; i--) {
			V[i] = OP1(V[2 * i], V[2 * i + 1]);
		}