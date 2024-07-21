template <typename T, typename E>
struct LazySegmentTree {
	using F = function<T(T, T)>;
	using G = function<T(T, E)>;
	using H = function<E(E, E)>;
	
	int n, height;
	vector<T> tree;
	vector<E> lazy;
	const F f;
	const G g;
	const H h;
	const T ti;
	const E ei;

	LazySegmentTree() {}