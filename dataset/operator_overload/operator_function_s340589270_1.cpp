value_type operator[](const size_type & k) {
		return fold(k, k + 1);
	}