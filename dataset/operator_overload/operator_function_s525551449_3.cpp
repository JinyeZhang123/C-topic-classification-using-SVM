ModInt operator*(ModInt other){
		return ModInt(this->x * (other.x % this->mod),this->mod);
	}