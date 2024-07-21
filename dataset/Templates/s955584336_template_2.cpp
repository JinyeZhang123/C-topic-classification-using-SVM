template<class InputIterator>
	void assign (InputIterator first, InputIterator last) noexcept {
		assign(last - first);
		for (size_type i = n; first != last; i++, first++) {
			node[i] = (*first);
		}