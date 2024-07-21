modint operator+(int x){
		value=value+x;
		if(value>=MOD)value-=MOD;
		return *this;
	}