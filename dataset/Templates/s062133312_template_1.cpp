template <typename T>
class DynamicFenwickTree {
	const ll n;
	unordered_map<ll, T> data;
public:
	DynamicFenwickTree(ll n_, int pmax = 1e5) : n(n_), data(pmax) {}