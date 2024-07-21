template<class InputIterator>
	constexpr rolling_hash (InputIterator first, InputIterator last) noexcept {
		build(first, last);
	}