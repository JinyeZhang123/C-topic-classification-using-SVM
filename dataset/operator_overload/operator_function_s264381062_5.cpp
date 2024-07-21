modint operator*(modint<MOD> x){
		value=(ll)value*x.value%mod;
		return *this;
	}