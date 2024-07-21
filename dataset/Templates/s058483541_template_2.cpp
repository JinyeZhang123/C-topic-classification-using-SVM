template <typename T>
class RARS {
	const int n;
	FenwickTree<T> bit0, bit1;
public:
	RARS(int n_) : n(n_), bit0(n), bit1(n) {}