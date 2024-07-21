modint operator+(modint<MOD> x){
		value=value+x.value;
		if(value>=MOD)value-=MOD;
		return *this;
	}