modint operator-(const modint &other) {
		modint ret;
		ret.p = p;
		ret.num = (num - other.num + p) % p;
		return ret;
	}