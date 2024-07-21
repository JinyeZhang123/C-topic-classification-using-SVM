template<class T, class E, class F, class G, class H> class lazy_segment_tree {
	int N = 1; // the number of leaves
	std::vector<T> value;
	std::vector<E> lazy;
	std::vector<bool> lazy_empty;

	void lazy_evaluation(const int& k, const int& l, const int& r) {
		value[k] = to_value(value[k], lazy[k], l, r);
		if (l + 1 < r) {
			lazy[k * 2] = op_lazy(lazy[k * 2], lazy[k]);
			lazy[k * 2 + 1] = op_lazy(lazy[k * 2 + 1], lazy[k]);
			lazy_empty[k * 2] = lazy_empty[k * 2 + 1] = false;
		}