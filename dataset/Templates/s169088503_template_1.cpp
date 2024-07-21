template<typename T, typename E, typename F, typename G, typename H> class lazy_segment_tree {
	int N;
	std::vector<T> value;
	std::vector<E> lazy;
	std::vector<bool> flag;

	void lazy_eval(const int& i, const int& l, const int& r) {
		if (lazy[i] == id_lz) return;
		value[i] = lz_to_val(value[i], lazy[i], r - l);
		if (r - l > 1) {
			lazy[i * 2] = op_lz(lazy[i * 2], lazy[i]);
			lazy[i * 2 + 1] = op_lz(lazy[i * 2 + 1], lazy[i]);
		}