template<typename T>
struct SegmentTree {
	SegmentTree(int n_){
		for (n = 1; n < n_; n <<= 1);
		val.assign(n * 2 - 1, INF);
	}