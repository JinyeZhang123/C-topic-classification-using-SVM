template<class MonoidPair>
struct LazySegmentTree {
	int n;
	using NODE = typename MonoidPair::NODE; using NODE_T = typename MonoidPair::NODE_T;
	using LAZY = typename MonoidPair::LAZY; using LAZY_T = typename MonoidPair::LAZY_T;
	vector<NODE> node;
	vector<LAZY> lazy;
	LazySegmentTree (int n_) {build(n_);}