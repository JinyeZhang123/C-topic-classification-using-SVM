template<class InputIterator>
	void build (InputIterator first, InputIterator last) noexcept {
		const size_type n = (last - first);
		hash.assign(n + 1, 0);
		pow.assign(n + 1, 1);
		for (size_type i = 0; first != last; first++, i++) {
			hash[i + 1] = mul(hash[i], base) + xorshift((*first) + 1);
			pow[i + 1] = mul(pow[i], base);
		}