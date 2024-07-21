template <typename T>
class FenwickTree {
	const int n;
	vector<T> data;
public:
	FenwickTree(int n_) : n(n_), data(n) {}