template <class T>
struct fenwick_tree {
	vector<T> x,lazy;
	fenwick_tree(int n) : x(n + 1, 0), lazy(n + 1, 0) { }