template<typename T>
struct SegmentTree {
	
	SegmentTree(int _n) : n(_n) { 
		t.resize(n * 4);
		lazy.resize(n * 4);
		len.resize(n * 4);
		lengths(1, 1, n);
	}