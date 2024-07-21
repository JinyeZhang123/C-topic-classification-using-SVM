template <typename T, typename U>
struct LazySegTree {
	int n;
	function<T(T, T)> calc;
	function<T(T, U, int)> apply;
	function<U(U, U)> merge;
	T ex;
	vector<T> data;
	vector<U> lazy;
	vector<bool> is_lazy;
	LazySegTree(int n_, function<T(T, T)> calc,
		function<T(T, U, int)> apply,
		function<U(U, U)> merge,
		T ex){
		this->calc = calc;
		this->apply = apply;
		this->merge = merge;
		this->ex = ex;	
		init(n_);
	}