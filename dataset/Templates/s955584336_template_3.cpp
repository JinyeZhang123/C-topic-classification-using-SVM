template<class T, class F>
dual_segment_tree<T, F> make_segtree(const T &identity, const F &op) {
	return dual_segment_tree<T, F>(identity, op);
}