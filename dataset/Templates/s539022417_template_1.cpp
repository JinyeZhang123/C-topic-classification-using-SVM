template <typename T>
struct SegmentTree {
private:
	size_t n;
	vector<T> node;
	T M0;

public:
	SegmentTree(const vector<T>& v, T m0) {
		M0 = m0;
		n = 1;
		while (n < v.size()) { n *= 2; }