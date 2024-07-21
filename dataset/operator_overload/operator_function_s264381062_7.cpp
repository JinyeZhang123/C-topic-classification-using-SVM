modint operator/(modint<MOD> x){
		value=(ll)value*inv(x.value)%mod;
		return *this;
	}