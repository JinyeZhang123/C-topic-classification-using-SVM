template<class T, class F>
struct dual_segment_tree {
	using value_type = T;
	using size_type = std::size_t;
private : 
	size_type n;
	const F op;
	const value_type identity;
	std::vector<value_type> node;

	void propagate (size_type i) noexcept {
		if (node[i] == identity) return;
		node[i << 1 | 0] = op(node[i << 1 | 0], node[i]);
		node[i << 1 | 1] = op(node[i << 1 | 1], node[i]);
		node[i] = identity;
	}