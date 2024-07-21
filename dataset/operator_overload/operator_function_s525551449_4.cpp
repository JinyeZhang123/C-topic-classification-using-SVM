ModInt operator/(ModInt other){
		return ModInt(*this * other.inv());
	}