modint operator-(modint<MOD> x){
		value-=x.value;
		if(value<0)value+=MOD;
		return *this;
	}