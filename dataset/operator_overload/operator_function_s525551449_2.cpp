ModInt operator-(ModInt other){
		long long int res = this->x - (other.x % this->mod);
		if (res < 0) return ModInt(res + this->mod, this->mod);
		return ModInt(res);
	}