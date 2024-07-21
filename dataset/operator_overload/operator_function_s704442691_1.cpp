ll operator[](int i) {
		//return dat[i + n - 1];
		return query(i, i + 1);
	}