void operator*=(const modint &other) {
		num = (num*other.num) % p;
	}