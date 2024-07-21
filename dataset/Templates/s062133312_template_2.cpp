template <typename T>
class DynamicRARS {
	const ll n;
	DynamicFenwickTree<T> bit0, bit1;
public:
	DynamicRARS(ll n_) : n(n_), bit0(n), bit1(n) {}