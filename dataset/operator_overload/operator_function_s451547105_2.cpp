modint operator+(const long long &other) {
		modint ret;
		ret.p = p;
		ret.num = (num + (other%p)) % p;
		return ret;
	}