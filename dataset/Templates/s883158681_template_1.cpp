template<typename T>
	struct segment_tree {
		long long N;				// the size of V
		long long M;				// the number of leaves
		std::vector<T> V;			// 1-indexed
		std::function<T(T, T)> OP;	// binary operation
		T ID;						// identity element of OP

		segment_tree() {}