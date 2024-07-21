template<typename Operator_t>
	SegmentTree(const std::vector<T> &array, Ft operate, Ft assign, T identity)
		: operate_(operate), assign_(assign), identity_(identity)
	{
		build(array.size());
		std::copy(array.begin(), array.end(), container_.begin() + (container_.size() >> 1));

		for (unsigned int i{(container_.size() >> 1) - 1}