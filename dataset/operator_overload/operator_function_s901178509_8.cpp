modint operator/(const long long &other) {
		modint ret;
		ret.p = p;
		ret.num = (num*rev(other%p, p)) % p;
		return ret;
	}