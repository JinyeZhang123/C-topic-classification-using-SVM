modint operator/(int x){
		value=(ll)value*inv(x)%mod;
		return *this;
	}