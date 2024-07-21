template<class InputIterator, class T, class F>
dual_segment_tree<T, F> make_dualsegtree (InputIterator first, InputIterator last, const T &identity, const F &op) {
	dual_segment_tree<T, F> segtree(identity, op);
	segtree.assign(first, last);
	return segtree;
}