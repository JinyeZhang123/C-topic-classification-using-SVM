IntegerIterator operator--(int) {
		IntegerIterator copy = *this;
		--value;
		return copy;
	}