template<typename T, typename M>
class lazysegtree {
public:
	long long n;
	vector<T> dat;
	vector<M> lazy;
	T et;
	M em;
	function<T(T, T)> op;//(左の子、右の子）
	function<T(M, T)> map;
	function<M(M, M)> com;//(新しい,古い)

	lazysegtree(long long n_, T et, M em, function<T(T, T)> op, function<T(M, T)> map, function<M(M, M)> com)
		:et(et), em(em), op(op), map(map), com(com) {
		n = (1 << (int)ceil(log2(n_)));
		dat.resize(2 * n-1, et);
		lazy.resize(2 * n-1, em);
	}