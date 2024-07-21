template<class T>
class lazysegtree {
	int n;
	vector<T> data, lazy;
	vector<bool> lazyflag;
	T def;
	function<T(T, T)> operation;
	function<T(T, T)> update;
public:
	lazysegtree(size_t _n, T _def, function<T(T, T)> _operation, function<T(T, T)> _update)
		:def(_def), operation(_operation), update(_update) {
		n = 1;
		while (n < _n) {
			n *= 2;
		}